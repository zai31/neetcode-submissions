class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size(),s=1,res=1;
        sort(nums.begin(),nums.end());
        if(n==0) return 0;
        for(int i=0;i<n-1;i++)
        {
            if(nums[i+1]==nums[i]) continue;
            else if(nums[i+1]-nums[i]==1) 
            {
                s++;

            }
            else{
                res=max(res,s);
                s=1;
            }
        }
        return max(res,s);
    }
};
