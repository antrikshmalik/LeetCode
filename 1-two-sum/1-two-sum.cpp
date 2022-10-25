  class Solution {
  public:
      vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> umap;
        for (int index = 0; index < nums.size(); index++) {
            int y = target - nums[index];
            if (umap.find(y) != umap.end()) {
                return {umap[y], index};
            }
            umap[nums[index]] = index;
        }
        return {};
    }
  };
