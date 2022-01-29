function twoSum(nums: number[], target: number): number[] {
  if (nums.length === 0) return [-1, -1];

  const map = new Map();

  for (let i = 0; i < nums.length; i++) {
    if (map.has(nums[i])) {
      return [map.get(nums[i]), i];
    } else {
      map.set(target - nums[i], i);
    }
  }

  return [-1, -1];
}