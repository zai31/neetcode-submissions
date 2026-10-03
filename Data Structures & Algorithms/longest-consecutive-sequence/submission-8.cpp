class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=(int)nums.size();
        sort(nums.begin(),nums.end());
int res=0;
if(n==1) return 1;
for(int i=0;i<n-1;i++)
{ int tmp=i,j=i+1,cnt=1;
        while(j<n)
        {
            if(nums[j]-nums[tmp]==1)
            {
                tmp=j;
                cnt++;
            }
            j++;
           
        }
        res=max(cnt,res);
}
return res;
    }
};
