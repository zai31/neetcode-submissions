class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=(int)s.size(),L=0,R=0,maxf=0,res=0;
       vector<int>f(26);
        while(R<n)
        {
            f[s[R]-'A']++;
            maxf=max(maxf,f[s[R]-'A']);
            if((R-L+1)-maxf<=k)
           {
             res=max(res,R-L+1);
             R++;
           }
            else if((R-L+1)-maxf>k)
           {
             f[s[L]-'A']--;
            L++;R++;
           }
        }
        return res;
        

    }
};
