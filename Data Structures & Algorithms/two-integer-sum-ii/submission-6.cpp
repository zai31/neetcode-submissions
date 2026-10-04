#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> res; // number -> index
        for(int i = 0; i < numbers.size(); i++){
            int complement = target - numbers[i];
            if(res.find(complement) != res.end()){
                return {res[complement]+1, i+1};
            }
            res[numbers[i]] = i;
        }
        return {}; // if no solution
    }
};