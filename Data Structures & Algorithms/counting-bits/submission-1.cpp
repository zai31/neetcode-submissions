class Solution {
public:
    vector<int> countBits(int n) {
    int off=1;
    vector<int>dp(n+1,0);

    for(int i=1;i<=n;i++)
    {
        if(off*2==i)
        off=i;
        dp[i]=1+dp[i-off];
    }
   return dp;
    }
};
