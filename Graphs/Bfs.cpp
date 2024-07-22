vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        queue<int>q;
        vector<int>bfs;
        vector<int>v(V,0);
        v[0]=1;
        q.push(0);
        while(!q.empty())
        {
            int k=q.front();
            q.pop();
            bfs.push_back(k);
            for(auto it : adj[k])
            {
                if(!v[it])
                {
                    v[it]=1;
                    q.push(it);
                }
            }
        }
        return bfs;
    }