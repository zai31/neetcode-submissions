class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int l=0,r=0,res=0;
        set<char>str;
        if(n==1) return 1;
        while(r<n)
        {
          if(str.find(s[r])==str.end())
          {
            str.insert(s[r]);
            res=max(res,r-l+1);
            r++;
          }
          else
          {
            str.erase(s[l]);
            l++;
          }
        }
        return res;
    }
};
