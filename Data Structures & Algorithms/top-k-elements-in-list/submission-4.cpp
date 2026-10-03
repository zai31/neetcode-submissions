class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        map<int,int>freq;
        for(auto num:nums)
        {
           freq[num]++;
        }
        vector<pair<int,int>>vec(freq.begin(), freq.end());
        
        sort(vec.begin(), vec.end(), [](auto& a, auto& b){
            return a.second > b.second;  // sort descending by frequency
        });
        vector<int>res;
         for(int i = 0; i < k; i++) {
            res.push_back(vec[i].first);
        }
        return res;
        
    }
};
