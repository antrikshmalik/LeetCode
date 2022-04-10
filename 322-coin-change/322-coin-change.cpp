class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>> dp(n+1,  vector<int>(amount+1));
        for(int i=0; i<n+1; i++) {
            for(int j=0; j<amount+1; j++) {
                if( i==0 ) 
                    dp[i][j] = INT_MAX-1;
                else if( j==0 and i!=0) 
                    dp[i][j] = 0;
                else if(i==1 and j!=0){
                    if(j%coins[i-1] == 0)
                        dp[i][j] = j/coins[i-1];
                    else
                        dp[i][j] = INT_MAX-1;
                }
                else if( j>=coins[i-1] ) {
                    dp[i][j] = min(1+dp[i][j-coins[i-1]], dp[i-1][j]);
                } else {
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        if(dp[n][amount] > amount) return -1;
        return dp[n][amount];
    }
};