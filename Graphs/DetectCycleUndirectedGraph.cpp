class Solution {
public:
    void bfs(int sr,int sc,int color,vector<vector<int>>image,vector<vector<int>>&v,int n,int m)
    {
        int k=image[sr][sc];
        queue<pair<int,int>>q;
        q.push({sr,sc});
        while(!q.empty())
        {
            int r=q.front().first;
            int c=q.front().second;
            v[r][c]=color;
            q.pop();
            int a=r-1,b=r+1,x=c-1,y=c+1;
            if(a>=0 && v[a][c]==0 && image[a][c]==k)
            {
                v[a][c]=color;
                q.push({a,c});
            }
            if(x>=0 && v[r][x]==0 && image[r][x]==k)
            {
                v[r][x]=color;
                q.push({r,x});
            }
            if(b<n && v[b][c]==0 && image[b][c]==k)
            {
                v[b][c]=color;
                q.push({b,c});
            }
            if(y<m && v[r][y]==0 && image[r][y]==k)
            {
                v[r][y]=color;
                q.push({r,y});
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(color==0)
        {
            return image;
        }
        int n=image.size(),m=image[0].size();
        vector<vector<int>>v(n,vector<int>(m,0));
        bfs(sr,sc,color,image,v,n,m);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!v[i][j] && image[i][j])
                {
                    v[i][j]=image[i][j];
                }
            }
        }
        return v;
    }
};