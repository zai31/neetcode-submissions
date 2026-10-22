class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int cnt=1,n=nums.size(),res=1;
        if(n==0) return 0;
        for(int i=1;i<n;i++)
        {
            if(nums[i-1]==nums[i]) continue;
            else if(nums[i-1]+1==nums[i])
            {cnt++;}
            else{
            res=max(cnt,res);
            cnt=1;
        }
        }
        return max(res,cnt);
    }
};
