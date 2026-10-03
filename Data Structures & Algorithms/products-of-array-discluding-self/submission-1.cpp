class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        
        vector<int> prefM(n, 1);
        vector<int> suffM(n, 1);
        vector<int> result(n);

        // Build prefix products
        for(int i = 1; i < n; i++) {
            prefM[i] = prefM[i-1] * nums[i-1];
        }

        // Build suffix products
        for(int i = n-2; i >= 0; i--) {
            suffM[i] = suffM[i+1] * nums[i+1];
        }

        // Build result
        for(int i = 0; i < n; i++) {
            result[i] = prefM[i] * suffM[i];
        }

        return result;
    }
};