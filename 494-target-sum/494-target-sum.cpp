class Solution {
public:
	int counter(vector<int> &arr, int n, int sum, vector<vector<int>> &dp)
	{
	    if(n == 0 and sum != 0) return 0;
	if(n == 0 and sum == 0) return 1;
	    if(dp[n-1][sum]!=-1) 
	        return dp[n-1][sum];
	    if(arr[n-1]>sum) 
	        return dp[n-1][sum]=counter(arr, n-1, sum, dp);
	    return dp[n-1][sum]=(counter(arr, n-1, sum-arr[n-1], dp)
	    +counter(arr, n-1, sum, dp));
	}
    int findTargetSumWays(vector<int>& nums, int tar) {
        int n = nums.size();
        int arrSum = 0;
        if(n == 1){ 
            if(nums[0] == abs(tar)) return 1;
            else return 0;
        }
        for(auto i:nums) arrSum+=i;
        if((arrSum+tar)%2!=0) return 0;
        int target = (arrSum + tar)/2;
        if(arrSum < tar) return 0;
        vector<vector<int>> dp(n+1, vector<int>(target+1, -1));
        return counter(nums, n, target, dp);
        // for(int i=0; i<n+1; i++) {
        //     for(int j=0; j<target+1; j++) {
        //         if(i==0) 
        //             dp[i][j] = 0;
        //         else if(j==0) 
        //             dp[i][j] = 1;
        //         else if(nums[i-1] > j)
        //             dp[i][j] = dp[i-1][j];
        //         else
        //             dp[i][j] = dp[i-1][j-nums[i-1]] + dp[i-1][j];
        //     }
        // }
        // return dp[n][target];
    }
};