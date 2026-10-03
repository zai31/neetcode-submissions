class Solution {
public:
    int countSubstrings(string s) {
        int n=(int)s.size();
         int l=0,r=0,cnt=0;
        for(int i=0;i<=n;i++)
        {  
            while(i-l>=0&&i+r<n&&s[i-l]==s[i+r])
            {
                l++;r++;
                cnt++;
            }
            
              l=0;r=0;
            
        }
          l=0,r=1; int cnt1=0;
        for(int i=0;i<=n;i++)
        {  
            while(i-l>=0&&i+r<n&&s[i-l]==s[i+r])
            {
                l++;r++;
                cnt1++;
            }
        
            
              l=0;r=1;
            
        }
        return cnt1+cnt;
    }
};
