#include "iostream"
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int INF = INFINITY;
  vector<vector<int>> rooms {
    {INF,-1, 0,INF},
    {INF,INF,INF,-1},
    {INF,-1,INF,-1},
    {0 ,-1,INF,INF}
  };
  vector<vector<int>> directions = {{-1,0},{0,1},{1,0},{0,-1}};
  queue<pair<int, int>> gates;
  for (int i = 0; i < rooms.size(); ++i) {
    for (int j = 0; j < rooms[0].size(); ++j) {
      if(rooms[i][j] == 0) gates.push({i, j});
    }
  }
  int len = gates.size();
  while(!gates.empty()) {
    if(len == 0) len = gates.size();
    int row = gates.front().first;
    int col = gates.front().second;
    gates.pop();
    len--;
    for (int i = 0; i < directions.size(); ++i) {
      int newRow = row + directions[i][0];
      int newCol = col + directions[i][1];
      if(newRow<0||newCol<0||newRow>=rooms.size()||newCol>=rooms[0].size()||rooms[newRow][newCol]==-1)
        continue;
      if(rooms[newRow][newCol]>(rooms[row][col] + 1)) {
        rooms[newRow][newCol] = rooms[row][col] + 1;
        gates.push(make_pair(newRow, newCol));
      }
    }
  }
  for (auto i:rooms) {
    for (auto j:i) {
      cout<<j<<" ";
    }
    cout<<endl;
  }
}