class Solution {
public:
    int characterReplacement(string s, int k) {
        int ans=0,n=s.length();
        for(char c='A';c<='Z';c++)
        {
            int i=0,j=0,r=0;
            while(j<n)
            {
                if(s[j]==c)
                {
                    j++;
                }
                else if(r<k)
                {
                    j++;
                    r++;
                }
                else if(s[i]==c)
                {
                    i++;
                }
                else
                {
                    i++;
                    r--;
                }
                ans=max(ans,j-i);
            }
        }
        return ans;
    }
};