class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m=INT_MAX,n=prices.size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            m=min(m,prices[i]);
            ans=max(ans,prices[i]-m);
        }
        return ans;
    }
};