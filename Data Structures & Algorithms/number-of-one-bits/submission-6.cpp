class Solution {
public:
    int hammingWeight(uint32_t n) {
        int cnt = 0; // Counter for 1s
        while(n!=0) { 
           n=n&(n-1);
           cnt++;
        }
        return cnt;
    }
};
