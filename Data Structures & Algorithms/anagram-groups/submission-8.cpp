class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
         map<string,vector<string>>freq;
         for(auto str:strs)
         {
            string s=str;
            sort(s.begin(),s.end());
            freq[s].push_back(str);
         }
    vector<vector<string>> res;
    for (auto pair : freq) {
            res.push_back(pair.second);
        }
        return res;


    }
};
