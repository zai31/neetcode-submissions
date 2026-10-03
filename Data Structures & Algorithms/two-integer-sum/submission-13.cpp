class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       int a=0,b=0;
    /*    unordered_map<int,int>indices;
        for(int i=0;i<(int)nums.size();i++)
            {
               indices[nums[i]]=i;
            }

        sort(nums.begin(),nums.end());
      
*/
  int j=(int)nums.size();
        for(int i=0;i<j;i++)
        {
            for(int t=i+1;t<j;t++)
            {
                if(nums[i]+nums[t]==target)
               {
                return {i,t};
               }
            }
            
        }
        return {};
       
    }
};
