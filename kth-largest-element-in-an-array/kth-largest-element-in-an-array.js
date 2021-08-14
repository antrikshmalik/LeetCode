/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
const findKthLargest = function (nums, k) {
  nums.sort(function(a, b) {return a - b;});
  return nums[nums.length-1 - k+1];
};