// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	int counter(int arr[], int n, int sum, vector<vector<int>> &dp)
	{
	    if(n == 0 and sum != 0) return 0;
        if(n == 0 and sum == 0) return 1;
	    if(dp[n-1][sum]!=-1) 
	        return dp[n-1][sum]%1000000007;
	    if(arr[n-1]>sum) 
	        return dp[n-1][sum]=counter(arr, n-1, sum, dp)%1000000007;
	    return dp[n-1][sum]=(counter(arr, n-1, sum-arr[n-1], dp)
	    +counter(arr, n-1, sum, dp))%1000000007;
	}
	int perfectSum(int arr[], int n, int sum)
	{
	    vector<vector<int>> dp(n+1, vector<int>(sum+1 , -1));
        return counter(arr, n, sum, dp);
	}
	  
};

// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}
  // } Driver Code Ends