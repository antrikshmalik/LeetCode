class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
      vector<vector<int>> directions = {{-1,0},{0,1},{1,0},{0,-1}};
      set<int> zeroes_row;
      set<int> zeroes_col;
      for (int i = 0; i < matrix.size(); ++i) {
        for (int j = 0; j < matrix[0].size(); ++j) {
          if(matrix[i][j] == 0){
            zeroes_row.insert(i);
            zeroes_col.insert(j);
          }
        }
      }
      for (int i = 0; i < matrix.size(); ++i) {
        for (int j = 0; j < matrix[0].size(); ++j) {
          if(zeroes_row.find(i) != zeroes_row.end() || zeroes_col.find(j) != zeroes_col.end())
            matrix[i][j] = 0;
        }
      }
    }
};