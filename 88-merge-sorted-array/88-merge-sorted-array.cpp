class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int s=m+n;
    for(int i=m,j=0; i<s,j<n; i++,j++)
    {
        nums1[i] = nums2[j];
    }
    sort(nums1.begin(), nums1.end());
    }
};
