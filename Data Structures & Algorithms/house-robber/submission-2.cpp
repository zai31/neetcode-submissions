class Solution {
public:
    int rob(vector<int>& nums) {
        int n=(int)nums.size();
        vector<int>dp(n+1,0);
        dp[0]=nums[0];
        dp[1]=nums[1];
        for(int i=1;i<n;i++)
        {
            dp[i]=max(nums[i]+dp[i-2],dp[i-1]);
        }
        return dp[n-1];
       
        
    }
};
