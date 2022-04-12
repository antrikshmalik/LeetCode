class Solution {
public:
    string longestPalindrome(string s) {
        string rev = s;
        reverse(rev.begin(), rev.end());
        int size = s.size();
        vector<vector<int>> dp(size+1, vector<int>(size+1));
        int max = 0;
        string res;
        for(int i=0; i<size+1; i++) {
            for(int j=0; j<size+1; j++) {
                if(i==0 || j==0) dp[i][j] = 0;
                else if( s[i-1] == rev[j-1] ) {
                    dp[i][j]= 1+dp[i-1][j-1];
                    
                    if(dp[i][j]>max)
                    {
                        string temp = s.substr(i-dp[i][j], dp[i][j]) ;
                        
                        string revtemp = string(temp.rbegin(),temp.rend());
                        if(revtemp==temp)
                        {
                            max = dp[i][j] ;
                            res = temp ;
                        }
                    }
                } else {
                    dp[i][j] = 0;
                }
            }
        }
        return res;
        // for(auto i:dp) {
        //     for(auto j:i) {
        //         cout<<j<<" ";
        //     }
        //     cout<<endl;
        // }
        // string result;
        // int i=size, j=size;
        // while(i>0 and j>0) {
        //     if(s[i-1] == rev[j-1]){
        //         result.push_back(s[i-1]);
        //         i--;
        //         j--;
        //     }
        //     else{
        //         if( dp[i-1][j]>dp[i][j-1] )
        //             i--;
        //         else
        //             j--;
        //     }
        // }
    }
};