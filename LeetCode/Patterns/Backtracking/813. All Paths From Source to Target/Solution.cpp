class Solution {
public:
vector<vector<int>>sol ;
vector<int>path ;
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        findallpaths(0,graph);
        return sol;
    }
    void findallpaths(int node ,vector<vector<int>>& graph){
    path.push_back(node);
    if(node == graph.size()-1){
        sol.push_back(path);
        path.pop_back();
        return ;
    }
    for(int c = 0 ; c<graph[node].size();c++){
        int dest = graph[node][c];
        findallpaths(dest,graph);
    }
    path.pop_back();
    }
};