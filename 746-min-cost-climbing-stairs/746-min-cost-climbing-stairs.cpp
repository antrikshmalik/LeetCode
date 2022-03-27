class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
      int n = cost.size();
      int dp1 = cost[0], dp2 = cost[1];
      for(int i=2; i<n; i++) {
        int curr = cost[i] + min(dp1, dp2);
        dp1 = dp2;
        dp2 = curr;
      }
      return min(dp1, dp2);
    }
};