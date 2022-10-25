const binarySearch = function (arr, target, left, right) 
{
  while (left<=right) {
    let mid = Math.floor((left+right) / 2);
    if (arr[mid]===target){
      return mid;
    } else if (target>arr[mid]){
      left = mid+1;
    } else {
      right = mid-1;
    }
  }
  return -1;
}
const searchRange = function (nums, target) {
  if (nums.length<1) return [-1, -1];
  let foundVal = binarySearch(nums, target, 0, nums.length-1);

  if(foundVal === -1) return [-1,-1];

  let lptr = foundVal, rptr = foundVal, tempR, tempL;
  while (rptr !== -1){
    tempR = rptr;
    rptr = binarySearch(nums, target, rptr+1, nums.length-1);
  }
  
  rptr = tempR;
  while (lptr !== -1){
    tempL = lptr;
    lptr = binarySearch(nums, target,  0, lptr-1);
  }
  
  lptr = tempL;
  return [lptr, rptr];
};
