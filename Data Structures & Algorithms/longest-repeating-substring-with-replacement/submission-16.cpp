class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>f(26);
        int n=s.size();
        int l=0,r=0,maxf=0,res=0;

        while(r<n)
        {
            f[s[r]-'A']++;
            maxf=max(maxf,f[s[r]-'A']);
            if((r-l+1)-maxf<=k)
            {
              res=max(res,r-l+1);
              r++;
            }
            else{
         f[s[l]-'A']--;
         r++;l++;
     
            }

        }
        return res;
    }
};
