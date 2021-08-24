const removeElement = function (nums, val) {
  let i=0;
  let n = nums.length;
  while (i<n){
    if(nums[i] === val){
      nums[i] = nums[n-1]
      n--;
      nums.pop()
    } else {
      i++
    }
  }
  return nums.length;
};