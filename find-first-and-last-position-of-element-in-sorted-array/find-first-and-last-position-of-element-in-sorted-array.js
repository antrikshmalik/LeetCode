const binarySearch = function (arr, target) {
  let left = 0, right = arr.length-1;
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
  let foundVal = binarySearch(nums, target);
  let positions = [];
  if (foundVal === -1){
    positions.push(-1);
    positions.push(-1);
    return positions;
  } else {
    let lptr = foundVal, rptr = foundVal;
    while(nums[lptr] === target){
      lptr--;
    }
    while (nums[rptr] === target){
      rptr++;
    }
    positions.push(++lptr);
    positions.push(--rptr);
    return positions;
  }
};

// console.log(searchRange([5,7,7,8,8,10], 8))