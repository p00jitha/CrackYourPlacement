class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l=0,m=0,r=nums.size()-1;
        while(l<=m && m<=r)
        {
            if(nums[m]==0)
            {
                swap(nums[l],nums[m]);
                l++;
                m++;
            }
            else if(nums[m]==1)
            {
                m++;
            }
            else
            {
                swap(nums[r],nums[m]);
                r--;
            }
        }
    }
};