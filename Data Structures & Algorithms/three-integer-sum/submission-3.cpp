
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        set<vector<int>> res;
        for(int i=0;i<n;i++)
        { int l=i+1,r=n-1;

        while(l<r)
        {
           
           
         if(nums[i]+nums[l]+nums[r]>0)
            r--;
            else if(nums[i]+nums[l]+nums[r]<0)
            l++;
            else
            {
                                        
        res.insert({nums[i],nums[l],nums[r]});

            r--;l++;
        }
        }
        }
          vector<vector<int>> ress(res.begin(),res.end());  
        

 
         return ress;
    }
}  
;
    

      
    

