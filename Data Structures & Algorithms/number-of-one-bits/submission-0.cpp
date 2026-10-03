class Solution {
public:
    int hammingWeight(uint32_t n) {
        int cnt = 0; // Counter for 1s
        for (int i = 0; i < 32; i++) { 
            if (n & (1 << i)) { // Check if the ith bit is 1
                cnt++;
            }
        }
        return cnt;
    }
};
