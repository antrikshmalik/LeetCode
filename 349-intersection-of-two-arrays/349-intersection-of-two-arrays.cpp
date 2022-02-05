#include "bits/stdc++.h"
using namespace std;

class Solution {
public:
    vector<int> intersectMain(vector<int> &bigger, vector<int> &smaller){
      vector<int> res;
      unordered_map<int, bool> umap;
      for (int i = 0; i < smaller.size(); ++i) {
        if(umap.find(smaller[i]) == umap.end()){
          umap[smaller[i]] = true;
        }
      }
      for (int i = 0; i < bigger.size(); ++i) {
        if(umap[bigger[i]]){
          umap.erase(bigger[i]);
          res.push_back(bigger[i]);
        }
      }
      return res;
    }
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
      vector<int> res;
      unordered_map<int, int> umap;
      if(nums1.size() > nums2.size()){
        return intersectMain(nums1, nums2);
      } else {
        return intersectMain(nums2, nums1);
      }
    }
};