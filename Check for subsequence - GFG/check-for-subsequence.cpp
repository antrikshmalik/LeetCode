// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std; 

 // } Driver Code Ends

class Solution{
    public:
    bool isSubSequence(string str1, string str2) 
    {
        int n = str1.size(), m = str2.size();
        int i=0, j=0;
        while(i<n && j<m) {
            if(str1[i] == str2[j]) {
                i++; j++;
            } else {
                j++;
            }
        }
        
        return i == n;
        
    //   vector<vector<int>> dp(n+1, vector<int>(m+1));
	   // for(int i=0; i<n+1; i++) {
	   //     for(int j=0; j<m+1; j++){
	   //         if(i==0 || j==0) 
	   //             dp[i][j] = 0;
	   //         else if(str1[i-1] == str2[j-1]) {
	   //             dp[i][j] = 1 + dp[i-1][j-1];
	   //         } else {
	   //             dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
	   //         }
	   //     }
	   // }
	   // return n==dp[n][m];
        // int i = n, j = m;
        // string result;
        // while(i>0 && j>0) {
        //     if(str1[i-1] == str2[j-1]){
        //         result.push_back(str1[i-1]);
        //         i--; j--;
        //     }
        //     else {
        //         if( dp[i][j-1] > dp[i-1][j] ) {
        //             // result.push_back(str2[j-1]);
        //             j--;
        //         } else {
        //             // result.push_back(str1[i-1]);
        //             i--;
        //         }
        //     }
        // }
	   // reverse(result.begin(), result.end());
	   // return result == str1;
	   //return dp[n][m];
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    scanf("%d",&t);
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;  
        Solution ob;
        if(ob.isSubSequence(A,B))
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;
    }
    return 0; 
} 
  // } Driver Code Ends