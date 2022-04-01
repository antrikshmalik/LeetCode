class Solution {
public:
    int recur(int n, vector<int> &dp)
    {
        if(dp[n] == -1)
            dp[n]=recur(n-1,dp)+recur(n-2,dp);
        return dp[n];
    }
    int fib(int n) {
        if(n == 0) return 0;
        vector<int> dp(n+1, -1);
        dp[0] = 0; dp[1] = 1;   
        return recur(n , dp);
    }
};