class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
      vector<int> cost(n, INT_MAX);
      cost[k-1] = 0;
      priority_queue<pair<int, int>> pq;
      pq.push({cost[k-1], k-1}); //cost : index
      while(!pq.empty()) {
        int currK = pq.top().second;
        pq.pop();
        for (int i = 0; i < times.size(); ++i) {
          if(currK == times[i][0] - 1){
            if(cost[times[i][1]-1] > times[i][2] + cost[times[i][0]-1]){
              cost[times[i][1]-1] = times[i][2] + cost[times[i][0]-1];
              pq.push({cost[times[i][1]-1], times[i][1]-1});
            }
          }
        }
      }
      int max = *max_element(cost.begin(), cost.end());
      return max == INT_MAX ? -1 : max;
    }
};