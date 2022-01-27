  class Solution {
  public:
      vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> umap;
        for (int i = 0; i < nums.size(); i++) {
            int y = target - nums[i];
            if (umap.find(y) != umap.end()) {
                return {umap[y], i};
            }
            umap[nums[i]] = i;
        }
        return {};
    }
  };