class Solution {
public:
    int climbStairs(int n) {
        if(n<=3)
        {
            return n;
        }
        int a=1,b=2;
        for(int i=1;i<=n-2;i++)
        {
            int c=a+b;
            a=b;
            b=c;
        }
        return b;
    }
};