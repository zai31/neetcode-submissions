class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> res;
        for(string str:strs)
        {
            string s=str;
            sort(s.begin(),s.end());
            res[s].push_back(str);
        }
        vector<vector<string>> r;
        for (auto it : res) {
            r.push_back(it.second);
        }
        return r;
    }
};
