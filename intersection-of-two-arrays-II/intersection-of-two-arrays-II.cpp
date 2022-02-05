#include "bits/stdc++.h"
using namespace std;

class Solution {
public:
    vector<int> intersectMain(vector<int> &bigger, vector<int> &smaller){
      vector<int> res;
      unordered_map<int, int> umap;
      for (int i = 0; i < smaller.size(); ++i) {
        if(umap.find(smaller[i]) != umap.end()){
          umap[smaller[i]] ++;
        } else {
          umap[smaller[i]] = 1;
        }
      }
      for (int i = 0; i < bigger.size(); ++i) {
        if(umap.find(bigger[i]) != umap.end()){
          umap[bigger[i]] = umap[bigger[i]]-1;
          if(umap[bigger[i]] <= 0) umap.erase(bigger[i]);
          res.push_back(bigger[i]);
        }
      }
      return res;
    }
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
      vector<int> res;
      unordered_map<int, int> umap;
      if(nums1.size() > nums2.size()){
        return intersectMain(nums1, nums2);
      } else {
        return intersectMain(nums2, nums1);
      }
    }
};

int main()
{
  Solution s;
  vector<int> v1 = {4,9,5}, v2 = {9,4,9,8,4};
  auto bb = s.intersect(v2,v1);
  for (auto i:bb) {
    cout<<i;
  }
}