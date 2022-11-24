class Solution {
public:
    bool dfs(vector<int>graph[],vector<bool>&vis,int src,int des)
    {
        vis[src]=1;
        if(src==des)
        {
            return true;
        }
        for(auto it:graph[src])
        {
           if(!vis[it])
           {
                if(dfs(graph,vis,it,des)==true)
                {
                    return true;
                }
           }
        }
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<bool>vis(n,0);
       vector<int>graph[n];
        for(int i=0;i<edges.size();i++)
        {
            graph[edges[i][0]].push_back(edges[i][1]);
            graph[edges[i][1]].push_back(edges[i][0]);
        }
        return dfs(graph,vis,source,destination);
    }
};
