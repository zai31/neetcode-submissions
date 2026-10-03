class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> unique(nums.begin(),nums.end());
        int n=nums.size();
        return unique.size()==n?false:true;

    }
};