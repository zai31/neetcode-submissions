class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=(int)nums.size();
         vector<int> result;
        int l=0,r=0;

        for(int i=0;i<n;i++)
        {  int res=1;
            for(int j=0;j<n;j++)
            {
        if(i==j)
         continue;
          res*=nums[j];
            }
            result.push_back(res);
        }
       
return result;
    }
};
