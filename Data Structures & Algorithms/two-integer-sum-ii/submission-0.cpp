class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=(int)numbers.size(),ind1=0,ind2=0;
        for(int i=0;i<n-1;i++)
        {
            auto it=find(numbers.begin()+i+1,numbers.end(),target-numbers[i]);
            
            if(it!=numbers.end())
            {
                ind1=i;ind2=it-numbers.begin();
            }
                

        }
        return {ind1+1,ind2+1};
    }
};
