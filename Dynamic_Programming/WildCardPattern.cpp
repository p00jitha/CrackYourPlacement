int wildmatch(string &pat,string &str,int i,int j,vector<vector<int>>&dp)
    {
        if(i<0 && j<0)
        {
            return 1;
        }
        if(i<0 && j>=0)
        {
            return 0;
        }
        if(j<0 && i>=0)
        {
            return pat[i]=='*' && wildmatch(pat,str,i-1,j,dp);
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        if(pat[i]==str[j] || pat[i]=='?')
        {
            return dp[i][j]=wildmatch(pat,str,i-1,j-1,dp);
        }
        else
        {
            if(pat[i]=='*')
            {
                return dp[i][j]=wildmatch(pat,str,i-1,j,dp)|| wildmatch(pat,str,i,j-1,dp);
            }
            else
            {
                return 0;
            }
        }
    }
    int wildCard(string pat, string str) {
        int n=pat.size();
        int m=str.size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        if( wildmatch(pat,str,n-1,m-1,dp))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }