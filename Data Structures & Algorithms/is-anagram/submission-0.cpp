class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>s1;
       
        if((int)s.size()!=(int)t.size())
        return false;
        for(int i=0;i<(int)s.size();i++)
        {
           s1[s[i]]++;
            s1[t[i]]--;

        }
        
         for(auto it:s1)
         {
            if (it.second!=0)
            return false;
         } 
return true;
       
    }
};
