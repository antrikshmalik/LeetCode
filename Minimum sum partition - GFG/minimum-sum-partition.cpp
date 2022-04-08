// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

  public:
    // bool subsetSum(int arr[], int n, vector<vector<int>>& dp, int sum){
    //     if(sum == 0) return 1;
    //     if(n == 0) return 0;
    //     if(dp[n-1][sum]!=-1) return dp[n-1][sum];
    //     if(sum<arr[n])
    //         return dp[n-1][sum] = subsetSum(arr, n-1, dp, sum);
    //     return dp[n-1][sum] = subsetSum(arr, n-1, dp, sum-arr[n-1]) || subsetSum(arr, n-1, dp, sum);
    // }   
    
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	    int range=0;
	    for(int i=0; i<n; i++) {
	        range+=arr[i];
	    }
	    int sum=range/2;
	    vector<vector<int>> dp(n+1, vector<int>(sum+1, -1));
	    for(int i=0; i<n+1; i++) {
            for(int j=0; j<sum+1;  j++) {
                if( i==0 ) dp[i][j] = false;
                if( j==0 ) dp[i][j] = true;
                if(i==0||j==0) continue;
                if(arr[i-1] <= j) {
                    dp[i][j] = dp[i-1][j-arr[i-1]] || dp[i-1][j];
                } else {
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        int mn = INT_MAX;
        for(int i=0; i<sum+1; i++){
            if( dp[n][i] ){
                mn = min(mn, range-2*i);
            }
        }
        return mn;
	} 
};


// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}  // } Driver Code Ends