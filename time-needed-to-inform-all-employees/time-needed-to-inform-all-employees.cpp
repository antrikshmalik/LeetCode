class Solution {
public:
    int dfsTime(int vertex, vector<vector<int>> &graph, vector<int> &informTime)
    {
      if(graph[vertex].size() == 0) return 0;
      int maxTime = 0;
      for (int i = 0; i < graph[vertex].size(); ++i) {
        maxTime = max(maxTime, dfsTime(graph[vertex][i], graph, informTime));
      }
      return maxTime + informTime[vertex];
    }
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
      vector<vector<int>> graph(manager.size(), vector<int>());
      for (int i = 0; i < manager.size(); ++i) {
        if(manager[i] == -1) continue;
        graph[manager[i]].push_back(i);
      }
      return dfsTime(headID, graph, informTime);
//      int counter = 0;
//      for (auto i:graph) {
//        cout<<counter++<<"  ";
//        for(auto j:i){
//          cout<<j<<" ";
//        }
//        cout<<endl;
//      }
    }
};