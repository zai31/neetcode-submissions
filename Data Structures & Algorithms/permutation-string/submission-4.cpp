class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.size(),m=s2.size(),l=0,r=n-1;
        vector<int>f1(26);
        vector<int>f2(26);
        if(m<n) return false;
        for(int i=0;i<n;i++)
        {
          f1[s1[i]-'a']++;
          f2[s2[i]-'a']++;
        }
        while(r<m)
        {
          if(f1==f2)
          {return true;}
                                  r++;

          if(r<m)
{
            f2[s2[r]-'a']++;
            f2[s2[l]-'a']--;
            l++;
          }
        }
        return false;
    }

};
