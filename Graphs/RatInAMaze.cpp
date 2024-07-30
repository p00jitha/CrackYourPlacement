class Solution {
  public:
    vector<string>ans;
    void find(int i,int j,int n,vector<vector<int>>&mat,string str)
    {
        if(i==n || j==n || i<0 || j<0)
        {
            return;
        }
        if(mat[i][j]==0)
        {
            return;
        }
        if(i==n-1 && j==n-1)
        {
            ans.push_back(str);
            return;
        }
        mat[i][j]=0;
        find(i+1,j,n,mat,str+"D");
        find(i,j+1,n,mat,str+"R");
        find(i-1,j,n,mat,str+"U");
        find(i,j-1,n,mat,str+"L");
        mat[i][j]=1;
    }
    vector<string> findPath(vector<vector<int>> &mat) {
        int n=mat.size();
        if(mat[0][0]==0)
        {
            return {"-1"};
        }
        find(0,0,n,mat,"");
        return ans;
    }
};