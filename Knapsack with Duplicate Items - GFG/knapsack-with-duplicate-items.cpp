// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int recur(int N, int W, int val[], int wt[], vector<vector<int>> &dp)
    {
        if(N==0 || W==0) return 0;
        if(dp[N][W]!=-1) return dp[N][W];
        if( wt[N-1]>W ) return dp[N][W] = recur(N-1, W, val, wt, dp);
        return dp[N][W] = max(val[N-1]+recur(N, W-wt[N-1], val, wt, dp), recur(N-1, W, val, wt, dp));
    }
    int knapSack(int N, int W, int val[], int wt[])
    {
        vector<vector<int>> dp(N+1, vector<int>(W+1));
        // return recur(N, W, val, wt, dp);
        for(int i=0; i<N+1; i++) {
            for(int j=0; j<W+1; j++) {
                if(i==0 or j==0) dp[i][j]=0;
                else if(wt[i-1] > j){
                    dp[i][j] = dp[i-1][j];
                } else {
                    dp[i][j] = max(val[i-1] + dp[i][j-wt[i-1]],dp[i-1][j]);
                }
            }
        }
        return dp[N][W];
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}  // } Driver Code Ends