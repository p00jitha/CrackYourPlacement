class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>>st;
        int n=nums.size();
        for(int i=0;i<n-2;i++)
        {
            int j=i+1,k=n-1;
            while(j<k)
            {
                int s=nums[i]+nums[j]+nums[k];
                if(s==0)
                {
                    st.insert({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                }
                else if(s<0)
                {
                    j++;
                }
                else
                {
                    k--;
                }
            }
        }
        vector<vector<int>>ans;
        for(auto it:st)
        {
            ans.push_back(it);
        }
        return ans;
    }
};