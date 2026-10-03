class Solution {
public:
    vector<int> countBits(int n) {
        uint32_t a=0;
        vector<int>res(n+1);
        for(int i=0;i<=n;i++)
        {
         res[i]=__builtin_popcount(a);
         a++;
        }
       return res;
    }
};
