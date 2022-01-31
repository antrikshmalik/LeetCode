class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
      vector<vector<int>> adjList(numCourses, vector<int>());
      vector<int> indegree(numCourses, 0);
      for (auto relation: prerequisites) {
        adjList[relation[1]].push_back(relation[0]);
        indegree[relation[0]]++;
      }
//      for (auto i: indegree) {
//        for (auto j: i) {
//          cout << j <<" ";
//        }
//        cout<<endl;
//      }
      stack<int> stk;
      for (int i = 0; i < indegree.size(); ++i) {
        if (indegree[i] == 0) {
          stk.push(i);
        }
      }
      int count = 0;
      while (!stk.empty()) {
        int current = stk.top(); stk.pop();
        count++;
        for (int i = 0; i < adjList[current].size(); ++i) {
          indegree[adjList[current][i]]--;
          if(indegree[adjList[current][i]] == 0)
            stk.push(adjList[current][i]);
        }
      }
      return count == numCourses;
    }
};
