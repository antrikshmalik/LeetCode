class Solution {
public:
    void paths(vector<vector<int>> &routes, vector<int> &route, vector<vector<int>> &graph, int vertex)
    {
        route.push_back(vertex);
        
        if(vertex == graph.size()-1)
            routes.push_back(route);
        
        for(int i=0; i<graph[vertex].size(); i++) {
            paths(routes, route, graph, graph[vertex][i]);
        }
        
        route.pop_back();        
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> routes;
        vector<int> route;
        paths(routes, route, graph, 0);
        return routes;
    }
};