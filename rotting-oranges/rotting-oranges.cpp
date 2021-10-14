class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        vector<vector<int>> directions = {{-1,0},{0,1},{1,0},{0,-1}};
  queue<pair<int, int>> rotten;
  int fresh_count = 0;
  for (int i = 0; i < grid.size(); ++i) {
    for (int j = 0; j < grid[0].size(); ++j) {
      if(grid[i][j] == 2)
        rotten.push(make_pair(i, j));
      if(grid[i][j] == 1)
        fresh_count++;
    }
  }
  if(fresh_count == 0) return 0;

  int time = 0;
  int len = rotten.size();
  while(rotten.size() > 0) {
    if(len == 0) {
      len = rotten.size();
      time++;
    }
    int row = rotten.front().first;
    int col = rotten.front().second;
    rotten.pop();
    len--;
    for (int i = 0; i < directions.size(); ++i) {
      int newRow = row + directions[i][0];
      int newCol = col + directions[i][1];
      if(newRow<0||newCol<0||newRow>=grid.size()||newCol>=grid[0].size())
        continue;
      if(grid[newRow][newCol] == 1){
        grid[newRow][newCol] = 2;
        fresh_count--;
        rotten.push(make_pair(newRow, newCol));
      }
    }
  }
  if(fresh_count != 0) return -1;
  return time;
    }        
};