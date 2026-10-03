class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       int a=0,b=0;
       unordered_map<int,int>indices;
        for(int i=0;i<(int)nums.size();i++)
            {
               indices[nums[i]]=i;
            }

      
       int j=(int)nums.size();
        for(int i=0;i<j;i++)
        {
            int diff=target-nums[i];
            
                if(indices.find(diff)!=indices.end()&&i!=indices[diff])
               {
                return {i,indices[diff]};
               }
            
            
        }
        return {};
       
    }
};
