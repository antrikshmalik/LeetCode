class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
      int n = nums.size();
      int subset_count = (1<<n); //since subsets of a set= 2^n
      vector<vector<int>> subsets;
      for (int mask = 0; mask < subset_count; ++mask) { //mask generation for each subset
        vector<int> subset; // vector for the 2-d return vector
        for (int i = 0; i < n; ++i) { // going through each bit of the mask
          if((mask & (1<<i)) != 0){ // if the bit is set then pushing the value in the vector
            subset.push_back(nums[i]);
          }
        }
        subsets.push_back(subset);
      }
      return subsets;
    }
};
