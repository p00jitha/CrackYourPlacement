class Solution {
public:
    int maxProduct(vector<int>& nums) {
       double d=1,p=1,mx=INT_MIN;
        int n=n=nums.size();
        for(int i=0;i<n;i++)
        {
            d=d*nums[i];
            if(d>mx)
            {
                mx=d;
            }
            if(d==0)
            {
                d=1;
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            p=p*nums[i];
            if(p>mx)
            {
                mx=p;
            }
            if(p==0)
            {
                p=1;
            }
        }
        return mx;
    }
};