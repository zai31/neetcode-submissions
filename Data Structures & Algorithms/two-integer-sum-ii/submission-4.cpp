class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0,j=numbers.size()-1,i1,i2;
        while(i<j)
        {
          if(numbers[i]+numbers[j]>target)
          j--;
                  else  if(numbers[i]+numbers[j]<target)
                  i++;
    else {i1=i+1;i2=j+1;break;}
        }
        return {i1,i2};
    }
};
