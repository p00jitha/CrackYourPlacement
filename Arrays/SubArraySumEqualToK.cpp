class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        long long int s=0,c=0;
        mp[0]=1;
        for(int i=0;i<nums.size();i++)
        {
            s=s+nums[i];
            int r=s-k;
            if(mp.find(r)!=mp.end())
            {
                c=c+mp[r];
            }
            mp[s]++;
        }
        return c;
    }
};