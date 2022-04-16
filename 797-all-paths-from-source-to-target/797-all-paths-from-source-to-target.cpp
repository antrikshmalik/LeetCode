class Solution {
public:
    int count=0;
    void path(vector<vector<int>> &graph, vector<vector<int>> &routes, int vertex, vector<int> &a, int x)
    {
        
        if(vertex == graph.size()-1)
        {
            routes.push_back(a);
        }
        //before entering parent
        // for (auto child:graph[vertex])
        // {
        //     // while entering the child
        //     path(graph, routes, child, a);
        //     //while exiting the child
        // }
        // //after exitting parent
        for(int i=0; i<graph[vertex].size(); i++) {
            a.push_back(-1);
            a[x+1]=graph[vertex][i];
            path(graph, routes, graph[vertex][i], a, x+1);
            a.pop_back();
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) 
    {
        vector<vector<int>> routes;
        vector<int> a;
        int x=0;
        a.push_back(0);
        path(graph, routes, 0, a, x);
        return routes;
    }
};