class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    int l=0,r=nums.size()-1,m,i;
    while (l <= r) {
        m =l + (r - l)/ 2;
  
        // Check if x is present at mid
        if (nums[m] == target)
            return m;
  
        // If x greater, ignore left half
        if (nums[m] < target)
            l = m + 1;
  
        // If x is smaller, ignore right half
        else
            r = m - 1;
    }
    for(i=0;i<nums.size();i++)
    {
        if(nums[i]>target)
        {
            return i;
        }
    }
    return i;
        }
};