class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int n=(int)coins.size();
        int m=amount;
        vector<vector<int>>dp(n+1,vector<int>(m+1));
        for(int i=0;i<=n;i++)
        {
            dp[i][0]=1;
        }
         for(int i=1;i<=m;i++)
        {
            dp[0][i]=0;
        }

        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                dp[i][j]=dp[i-1][j];
                 if (j >= coins[i - 1]) {  // Include current coin
                    dp[i][j] += dp[i][j - coins[i - 1]];
            }
           
        }
        }
        return dp[n][m];
        
        
    }
};
