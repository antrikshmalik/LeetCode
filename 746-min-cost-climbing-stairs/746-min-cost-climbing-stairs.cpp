class Solution {
public:
    int minCost(int i, vector<int> &dp, vector<int> &cost){
        if(i<0) return 0;
        if(i == 0 || i == 1) return cost[i];
        if(dp[i]) return dp[i];
        dp[i] = cost[i] + min(minCost(i-1, dp, cost), minCost(i-2, dp, cost));
        return(dp[i]);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n);
        return min(minCost(n-1, dp, cost), minCost(n-2, dp, cost));
    }
};