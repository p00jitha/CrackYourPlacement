class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1;
        int s=0;
        while(i<=j)
        {
            int k=min(height[i],height[j]);
            s=max(s,k*(j-i));
            if(height[i]<=height[j])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return s;
    }
};