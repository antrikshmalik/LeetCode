// A string is said to be using strong language if it contains at least K consecutive characters '*'.
// You are given a string S with length N. Determine whether it uses strong language or not.

#include <iostream>
using namespace std;
//sscript
int main(void)
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int count = 0, flag = 0;
    
        for (int i = 0; i < n; i++) 
        {
          if (s[i] == '*') 
          {
            count++;
            if (s[i] == s[i + 1]) 
            {
              count++;
              i++;
            }
          }
          else 
          {
            count = 0;
          }
          if (count == k) 
          {
            flag = 1;
            break;
          }
        }
        
        if (flag == 1) {
          cout << "YES";
        } else {
          cout << "NO";
        }
        cout<<endl;
    }
}
