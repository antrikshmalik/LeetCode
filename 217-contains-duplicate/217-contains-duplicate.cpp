class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
      unordered_map<int, int> map;
      for(int i=0; i<nums.size(); i++) {
        if(map[nums[i]]){
          int tempCount = map[nums[i]];
          map[nums[i]] = tempCount++;
        }
        else{
          map[nums[i]] = 1;
        }
      }
      int count=0;
      for (auto i:map) {
        if(i.second == 1)
          count++;
      }
        return count != nums.size();
    }
};