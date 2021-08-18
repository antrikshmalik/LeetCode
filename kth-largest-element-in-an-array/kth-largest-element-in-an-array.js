/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
const swap = function(arr, a, b) {
  let temp = arr[b];
  arr[b] = arr[a];
  arr[a] = temp;
}

const partition = function(array, left, right) {
  let pivot = array[right];
  let i = left; //final resting place of the pivot
  for (let j = left; j < array.length; j++) {
    if (array[j] < pivot){
      swap(array, i, j);
      i++;
    }
  }
  swap(array, right, i);
  return i;
}

const quickSelect = function (array, left, right, position) {
  if (left < right) {
    let partitionIndex = partition(array, left, right, position);
    if (position === partitionIndex){
      return array;
    }else if (position>partitionIndex){
      quickSelect(array, partitionIndex+1, right, position);
    } else {
      quickSelect(array, left, partitionIndex-1, position);
    }
  }
}

const findKthLargest = function (nums, k) {
  let position = nums.length - k;
  quickSelect(nums, 0, nums.length - 1, position)
  return nums[position];
};
