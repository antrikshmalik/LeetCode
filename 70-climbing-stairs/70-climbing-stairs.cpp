class Solution {
public:
    int recur(int n, vector<int> &dp)
    {
        if(!dp[n]) {
            dp[n] = recur(n-1, dp) + recur(n-2, dp);
        }
        return dp[n];
    }
    
    int climbStairs(int n) {
        if(n<=1) return n;
        vector<int> dp(n+1);
        dp[0] = 0; dp[1] = 1; dp[2] = 2;
        return recur(n, dp);
    }
};
