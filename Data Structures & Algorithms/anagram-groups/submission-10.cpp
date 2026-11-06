class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    map<string,vector<string>>anagrams;

    for(auto it: strs)
    {   
         string tmp=it;
       sort(tmp.begin(),tmp.end());
        anagrams[tmp].push_back(it);
    }

    vector<vector<string>> res;
    for(auto it:anagrams)
    {
        res.push_back(it.second);
    }
    return res;
    }
};
