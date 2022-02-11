class Solution {
public:
    vector<int> getRow(int numRows) {
      ++numRows;
      vector<vector<int>> res;
      if(numRows==0) return {{}};
      queue<int> tempAdd;
      for (int i = 0; i < numRows; ++i) {
        vector<int> row(i+1, 1);
        if(i>=1){
          for (int j = 0; j < res[i-1].size()-1; ++j) {
            int tp = res[i-1][j]+res[i-1][j+1];
            tempAdd.push(tp);
          }
          if(i>=2){
            for (int j = 1; j < row.size()-1; ++j) {
              row[j] = tempAdd.front(); tempAdd.pop();
            }
          }
        }
        res.push_back(row);
      }
      return res[res.size()-1];
    }
};