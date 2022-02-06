```
#include "bits/stdc++.h"
#include <stdio.h>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
      unsigned long long n1 = 0, n2 = 0;
      for (unsigned long long  i = 0; i < nums1.size(); ++i) {
        if((n1 & (1 << nums1[i])) == 0){
          n1 = n1 | (1<<nums1[i]);
          cout<<n1<<endl;
        }
      }
      for (unsigned long long  i = 0; i < nums2.size(); ++i) {
        if((n2 & (1 << nums2[i])) == 0){
          n2 = n2 | (1<<nums2[i]); // for toggling bits use xor 
        }                           // like this :  n2 = n2 ^ (1<<nums2[i]);
      }                             // unset:  n2 = n2 & (~1<<nums2[i]);
      cout<<n1<<" "<<n2<<endl;
      unsigned long long  intersect = n1 & n2;
      vector<int> res;
      cout<<intersect<<" Last"<<endl;
      for (unsigned long long  i = 0; i < 32; ++i) {
        if((intersect&(1<<i)) != 0){
          res.push_back(i);
        }
      }
      return res;
    }
};

int main()
{
  Solution s;
  vector<int> v1 = {4,9,5}, v2 = {9,4,9,8,4};
  auto bb = s.intersection(v1,v2);
  for (auto i:bb) {
    cout<<i<<endl;
  }
}```
