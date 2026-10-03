class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=(int)s.size();
        int m=(int)t.size();
        int size=max(n,m);
        unordered_map<char,int> map_of_frequency;
        for(int i=0;i<size;i++)
        {
            map_of_frequency[s[i]]++;
            map_of_frequency[t[i]]--;

        }
         for(auto it:map_of_frequency)
        {
           if(it.second!=0)
           return false;
        }
        return true;
        

    }
};
