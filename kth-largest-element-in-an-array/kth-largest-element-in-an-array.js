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

const quickSort = function (array, left, right) {
  if (left < right) {
    let partitionIndex = partition(array, left, right);
    quickSort(array, left, partitionIndex-1);
    quickSort(array, partitionIndex+1, right);
  }
}

const findKthLargest = function (nums, k) {
  quickSort(nums, 0, nums.length - 1)
  return nums[nums.length - k];
};

