void dfsTraversal(int node,vector<int>adj[],vector<int>&dfs,vector<int>&v)
    {
        v[node]=1;
        dfs.push_back(node);
        for(auto it:adj[node])
        {
            if(!v[it])
            {
            dfsTraversal(it,adj,dfs,v);
            }
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<int>dfs;
        vector<int>v(V,0);
        dfsTraversal(0,adj,dfs,v);
        return dfs;
    }