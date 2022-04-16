class Solution {
public:
    int recur(vector<int> &nums, vector<int> &dp, int n)
    {
        if(n<0)
            return 0;
        if(dp[n]!=-1)
            return dp[n];
        return dp[n]=max(recur(nums, dp, n-1), recur(nums, dp, n-2) + nums[n]);
    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(), -1);
        return recur(nums, dp, nums.size()-1);
    }
};