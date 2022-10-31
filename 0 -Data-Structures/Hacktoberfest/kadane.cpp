//Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.


class Solution {
public:
    int maxSubArray(vector<int> &nums) {
        int globalMaxSum = nums[0], currMaxSum = nums[0];
        for (int ind = 1; ind < nums.size(); ind++) {
            currMaxSum = max(currMaxSum + nums[ind], nums[ind]);
            globalMaxSum = max(globalMaxSum, currMaxSum);
        }
        return globalMaxSum;
    }
};