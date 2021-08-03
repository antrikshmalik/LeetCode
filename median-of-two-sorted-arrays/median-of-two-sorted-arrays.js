/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number}
 */
const findMedianSortedArrays = function (nums1, nums2) {
  let nums3 = nums1.concat(nums2)
  nums3.sort(function(a, b){return a - b});
  let n = nums3.length;
  if(n===1) return nums3[n-1];
  if(n%2 === 0){
    return (nums3[n/2]+nums3[n/2-1])/2;
  } else {
    return nums3[((n+1)/2)-1];
  }
};