#include "iostream"
#include "bits/stdc++.h"
using namespace std;

int main()
{
  vector<vector<int>> adjacencyList{
          {1, 3},
          {0},
          {3, 8},
          {0, 2, 4, 5},
          {3, 6},
          {3},
          {4, 7},
          {6},
          {2}
  };
  map<int, bool> seen;
  queue<int> q;
  vector<int> result;
  q.push(0);
  while (!q.empty()){
    int vertex = q.front(); q.pop();
    result.push_back(vertex);
    seen[vertex] = true;
    for (int i = 0; i < adjacencyList[vertex].size(); ++i) {
      if(!seen[adjacencyList[vertex][i]]){
        q.push(adjacencyList[vertex][i]);
      }
    }
  }
  for (auto i:result) {
    cout<<i<<" ";
  }
}