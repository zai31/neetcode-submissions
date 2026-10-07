class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=(int)s.size(),res=0;
     set<char>substring;
     if(s.empty()) return 0;
     if(s.size()==1) return 1;
     else{
     int r=0,l=0;
        while(r<n)
        {
         if(substring.find(s[r])==substring.end())
         {
           substring.insert(s[r]); 
           res=max(res,r-l+1);
           r++;
         }
         else
         {
           substring.erase(s[l]);
            l++;
         }
        }
     }
        return res;
    }
};
