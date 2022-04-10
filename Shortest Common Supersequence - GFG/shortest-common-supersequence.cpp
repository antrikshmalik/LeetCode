// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    //Function to find length of shortest common supersequence of two strings.
    int shortestCommonSupersequence(string text1, string text2, int n, int m)
    {
        int worstCase = m + n;
        vector<vector<int>> dp(n+1, vector<int>(m+1));
        for(int i=0; i<n+1; i++) {
            for(int j=0; j<m+1; j++) {
                if( i==0 || j==0 ) dp[i][j] = 0;
                else if( text1[i-1] == text2[j-1] ){
                    dp[i][j] = 1+dp[i-1][j-1];
                    
                }
                else
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        return worstCase - dp[n][m];
        
    }
};

// { Driver Code Starts.

int main()
{   
    
    int t;
    
    //taking total testcases
    cin >> t;
    while(t--){
    string X, Y;
    //taking String X and Y
	cin >> X >> Y;
	
	//calling function shortestCommonSupersequence()
	Solution obj;
	cout << obj.shortestCommonSupersequence(X, Y, X.size(), Y.size())<< endl;
    }
	return 0;
}

  // } Driver Code Ends