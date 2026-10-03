class Solution {
public:
    bool checkInclusion(string s1, string s2) {
      vector<char>s((int)s1.size());
      vector<int>f1(26);
      vector<int>f2(26);
       int m=(int)s1.size();
      int n=(int)s2.size(),l=0,r=m-1,res=0;
    
      for(int i=0;i<(int)s1.size();i++)
      {
        f1[s1[i]-'a']++;
        f2[s2[i]-'a']++;
      }
      if(m>n)return false;
       
       while(r<n)
       {
        if(f1==f2)
        return true;
        
        
          r++;
          if(r<n)
          {f2[s2[r]-'a']++;
           f2[s2[l]-'a']--;l++;
          }

       }
       return false;

    }
};
