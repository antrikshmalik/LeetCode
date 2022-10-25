// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int minDeletions(string str, int n);

int main(){
    int t;
    cin >> t;
    while(t--){
        
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << minDeletions(s, n) << endl;

    }
return 0;
}// } Driver Code Ends


int minDeletions(string s, int size) 
{ 
    
    string rev = s;
    
    reverse(rev.begin(), rev.end());
    
    vector<vector<int>> dp(size+1, vector<int>(size+1));
    
    for(int i=0; i<size+1; i++) {
        
        for(int j=0; j<size+1; j++) {
            
            if(i==0 || j==0) dp[i][j] = 0;
            
            else if( s[i-1] == rev[j-1] ) {
                
                dp[i][j]= 1+dp[i-1][j-1];
                
            } else 
            
            {
                
                dp[i][j]= max(dp[i-1][j],dp[i][j-1]);
                
            }
        }
    }
    
    return size-dp[size][size];
} 
