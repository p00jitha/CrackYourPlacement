class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>v;
        int k=0,n=nums.size();
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]!=nums[i+1])
            {
                v.push_back(nums[i]);
            }
            k=nums[i];
        }
        v.push_back(nums[n-1]);
        int l=v.size();
        for(int i=0;i<l;i++)
        {
            nums[i]=v[i];
        }
        return l;
    }
}