class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
      vector<vector<int>> adjList (numCourses, vector<int>());
      for (auto relation:prerequisites) {
        adjList[relation[1]].push_back(relation[0]);
      }
      for (int v = 0; v < numCourses; ++v) {
        queue<int> q;
        map<int, bool> seen;
        for (int i = 0; i < adjList[v].size(); ++i) {
          q.push(adjList[v][i]);
        }
        while (!q.empty()){
          int current = q.front(); q.pop();
          seen[current] = true;
          if(current == v) return false;
          for (int i = 0; i < adjList[current].size(); ++i) {
            if(!seen[adjList[current][i]])
              q.push(adjList[current][i]);
          }
        }
      }
      return true;
    }
};
