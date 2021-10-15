#include "iostream"
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> directions = {{-1,0},{0,1},{1,0},{0,-1}};

void dfs(vector<vector<int>> &rooms, int row, int col, int count)
{
  if(row<0||col<0||row>=rooms.size()||col>=rooms[0].size()||count>rooms[row][col]) return;
  rooms[row][col] = count;
  for (auto i:directions) dfs(rooms, i[0]+row, i[1]+col, ++count);
}

int main()
{
  int INF = INFINITY;
  vector<vector<int>> rooms {
    {INF,-1, 0,INF},
    {INF,INF,INF,-1},
    {INF,-1,INF,-1},
    {0 ,-1,INF,INF}
  };

  for (int i = 0; i < rooms.size(); ++i) {
    for (int j = 0; j < rooms[0].size(); ++j) {
      if(rooms[i][j] == 0) dfs(rooms, i, j, 0);
    }
  }

  for (auto i:rooms) {
    for (auto j:i) {
      cout<<j<<" ";
    }
    cout<<endl;
  }
}