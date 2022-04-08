class Solution {
public:
    bool subsetSum(vector<int>& nums, int n, int sum, vector<vector<int>> &dp)
    {
        if( sum==0 ) return true;
        if( n<=0 ) return false;
        if( dp[n-1][sum]!=-1 ) 
            return dp[n-1][sum];
        if( sum<nums[n-1] ) 
            return dp[n-1][sum] = subsetSum(nums, n-1, sum, dp);
        return dp[n-1][sum] = subsetSum(nums, n-1, sum-nums[n-1], dp) 
            || subsetSum(nums, n-1, sum, dp);
    }
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(int i:nums) sum+=i;
        if(sum%2 == 0) {
            vector<vector<int>> dp(nums.size()+1, vector<int>(sum/2+1,-1));
            return subsetSum(nums, nums.size(), sum/2, dp);
        }
        else
            return false;
    }
};