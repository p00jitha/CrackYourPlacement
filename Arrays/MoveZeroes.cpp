class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0,j=0,n=nums.size();
        while(j<n && nums[j]!=0)
        {
            j++;
        }
        i=j;
        while(j<n && nums[j]==0)
        {
            j++;
        }
        while(j<n)
        {
            swap(nums[i],nums[j]);
            i++;
            while(j<n && nums[j]==0)
            {
                j++;
            }
        }
    }
};