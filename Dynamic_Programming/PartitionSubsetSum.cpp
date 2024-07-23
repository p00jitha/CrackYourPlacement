class Solution{
public:
    int fun(int N,int arr[],int k,vector<vector<int>>&dp)
    {
        if(k==0)
        {
            return 1;
        }
        if(N==0)
        {
            return arr[0]==k;
        }
        if(dp[N][k]!=-1)
        {
            return dp[N][k];
        }
        int take=0;
        if(k>=arr[N])
        {
         take=fun(N-1,arr,k-arr[N],dp);
        }
        int notake=fun(N-1,arr,k,dp);
        dp[N][k]= take||notake;
        return dp[N][k];
    }
    int equalPartition(int N, int arr[])
    {
        int s=0;
        for(int i=0;i<N;i++)
        {
            s=s+arr[i];
        }
        int m=s/2;
        if(s%2)
        {
            return 0;
        }
        else
        {
            vector<vector<int>>dp(N,vector<int>(m+1,-1));
            return fun(N-1,arr,m,dp);
        }
    }
};