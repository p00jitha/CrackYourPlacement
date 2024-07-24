class Solution {
public:
    int fun(int idx,vector<int>&coins,int amount,vector<vector<long long>>&dp)
    {
        if(idx==0)
        {
            if(amount%coins[0]==0)
            {
                return amount/coins[0];
            }
            else
            {
                return 1e9;
            }
        }
        if(dp[idx][amount]!=-1)
        {
            return dp[idx][amount];
        }
        long long int take=INT_MAX,notake;
        notake=0+fun(idx-1,coins,amount,dp);
        if(coins[idx]<=amount)
        {
        take=1+fun(idx,coins,amount-coins[idx],dp);
        }
        dp[idx][amount]=min(take,notake);
        return dp[idx][amount];
    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<long long>>dp(n,vector<long long>(amount+1,-1));
        int k=fun(n-1,coins,amount,dp);
        if(k==1e9)
        {
            return -1;
        }
        return k;
    }
};