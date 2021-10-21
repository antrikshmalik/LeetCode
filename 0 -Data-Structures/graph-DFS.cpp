#include "iostream"
#include "bits/stdc++.h"
using namespace std;

void dfsGraph(vector<vector<int>> graph, map<int, bool> &seen, vector<int> &result, int vertex)
{
  result.push_back(vertex);
  seen[vertex] = true;
  for (int i = 0; i < graph[vertex].size(); ++i) {
    if(!seen[graph[vertex][i]]){
      dfsGraph(graph, seen, result, graph[vertex][i]);
    }
  }
}

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
  vector<int> result;
  dfsGraph(adjacencyList, seen, result, 0);
  for (auto i:result) {
    cout<<i<<" ";
  }
}