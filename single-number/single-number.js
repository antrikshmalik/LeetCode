const singleNumber = function (nums) {
  if(nums.length < 1) return nums;
  if(nums.length === 1) return nums[0];
  let repeated = new Map();
  for (let i = 0; i < nums.length; i++){
    let count = 1;
    if (!repeated.has(nums[i])) {
      repeated.set(nums[i], count)
    } else {
      repeated.set(nums[i], ++count)
    }
  }
  return getKeyByValue(repeated, 1)
};
function getKeyByValue(map, searchValue) {
  for (let [key, value] of map.entries()) {
    if (value === searchValue)
      return key;
  }
}