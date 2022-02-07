class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int minimumSoFar = INT_MAX;
      int overallProfit = 0;
      int profitIfSoldToday = 0;
      for (int i = 0; i < prices.size(); ++i) {
        if(minimumSoFar>prices[i]) minimumSoFar = prices[i];
        profitIfSoldToday = prices[i] - minimumSoFar;
        if(overallProfit<profitIfSoldToday) overallProfit = profitIfSoldToday;
      }
      return overallProfit;
    }
};