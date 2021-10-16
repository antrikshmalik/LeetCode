class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
      bool flag = false;
      for (int i = 0; i < matrix.size(); ++i) {
        if(target<=matrix[i][matrix[0].size()-1] && target>=matrix[i][0]){
          int lo = 0, hi = matrix[0].size()-1;
          while(lo<=hi) {
          int mid = floor((lo + hi)/2);
            if(matrix[i][mid] == target||matrix[i][lo]==target||matrix[i][hi]==target){
              flag = true; break;
            }
            else if(matrix[i][mid] < target)
              lo = mid + 1;
            else
              hi = mid - 1;
          }
          if(flag) break;
        }
      }
      return flag;
    }
};