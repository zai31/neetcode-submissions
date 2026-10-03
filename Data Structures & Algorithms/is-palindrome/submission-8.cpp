class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        if(n==1) return true;
        for(int i=0,j=n-1;i<j;i++,j--)
        {
            while(!isalnum(s[i])&&i<j) i++;
            while(!isalnum(s[j])&&i<j) j--;
            if(tolower(s[i])!=tolower(s[j])) return false;
        }
        return true;
    }
};
