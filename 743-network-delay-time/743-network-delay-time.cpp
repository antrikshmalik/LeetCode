class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
      vector<vector<pair<int, int>>> adjList(n, vector<pair<int,int>>());
      for (int i = 0; i < times.size(); ++i) {
         adjList[times[i][0] - 1].push_back({times[i][1] - 1, times[i][2]}); //destination : cost
      }
      vector<int> cost(n, INT_MAX);
      cost[k-1] = 0;
      priority_queue<pair<int, int>> pq;
      pq.push({cost[k-1], k-1}); //cost : index
      while(!pq.empty()){
        int currK = pq.top().second;
        pq.pop();
        for (int i = 0; i < adjList[currK].size(); ++i) {
          if(cost[adjList[currK][i].first] > cost[currK] + adjList[currK][i].second){
            cost[adjList[currK][i].first] = cost[currK] + adjList[currK][i].second;
            pq.push({cost[adjList[currK][i].first], adjList[currK][i].first});
          }
        }
      }
      int max = *max_element(cost.begin(), cost.end());
      return max == INT_MAX ? -1 : max;
    }
};