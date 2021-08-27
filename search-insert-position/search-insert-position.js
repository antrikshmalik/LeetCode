const binarySearch = function (arr, target, left, right) {
  let mid;
  while (left<=right) {
    mid = Math.floor((left+right) / 2);
    if (arr[mid]===target){
      return mid;
    } else if (target>arr[mid]){
      left = mid+1;
    } else {
      right = mid-1;
    }
  }
  if (target === 0)
    return 0;
  if (target <= arr[mid])
    return mid;
  return mid+1;
}

const searchInsert = function (nums, target) {
  return binarySearch(nums, target, 0, nums.length-1)
};