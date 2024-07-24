int fun(int w,int wt[],int val[],int n,vector<vector<int>>&dp)
    {
        if(n==0)
        {
            if(wt[0]<=w)
            {
                return val[0];
            }
            else
            {
                return 0;
            }
        }
        if(dp[n][w]!=-1)
        {
            return dp[n][w];
        }
        int take=INT_MIN,notake;
        notake=0+fun(w,wt,val,n-1,dp);
        if(wt[n]<=w)
        {
            take=val[n]+fun(w-wt[n],wt,val,n-1,dp);
        }
        dp[n][w]=max(take,notake);
        return dp[n][w];
    }
    int knapSack(int w, int wt[], int val[], int n) 
    { 
       vector<vector<int>>dp(n,vector<int>(w+1,-1));
       return fun(w,wt,val,n-1,dp);
    }