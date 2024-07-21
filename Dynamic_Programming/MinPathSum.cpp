class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        vector<vector<int>>v(n,vector<int>(m,0));
        v[0][0]=grid[0][0];
        int s=grid[0][0];
        for(int i=1;i<n;i++)
        {
            s=s+grid[i][0];
            v[i][0]=s;
        }
        s=grid[0][0];
        for(int i=1;i<m;i++)
        {
            s=s+grid[0][i];
            v[0][i]=s;
        }
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                v[i][j]=min(v[i-1][j],v[i][j-1])+grid[i][j];
            }
        }
        return v[n-1][m-1];
    }
};