class Solution {
public:
    void bfs(int i,int j,vector<vector<char>>&grid,vector<vector<int>>&v,int n,int m)
    {
        v[i][j]=1;
        queue<pair<int,int>>q;
        q.push({i,j});
        while(!q.empty())
        {
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            int a=r-1,b=r+1,x=c-1,y=c+1;
            if(a>=0 && grid[a][c]=='1' && v[a][c]==0)
            {
                v[a][c]=1;
                q.push({a,c});
            }
            if(b<n && grid[b][c]=='1' && v[b][c]==0)
            {
                v[b][c]=1;
                q.push({b,c});
            }
            if(x>=0 && grid[r][x]=='1' && v[r][x]==0)
            {
                v[r][x]=1;
                q.push({r,x});
            }
            if(y<m && grid[r][y]=='1' && v[r][y]==0)
            {
                v[r][y]=1;
                q.push({r,y});
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size(),m=grid[0].size(),c=0;
        vector<vector<int>>v(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='1' && !v[i][j])
                {
                    bfs(i,j,grid,v,n,m);
                    c++;
                }
            }
        }
        return c;
    }
};