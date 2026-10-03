#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        int n = (int)nums.size();
        if (nums.empty()) return 0;
        if (n == 1) return nums[0];
        if (n == 2) return max(nums[0], nums[1]);

        vector<int> dp1(n, 0);
        vector<int> dp2(n, 0);

        // Case 1: Rob from house 0 to n-2
        dp1[0] = nums[0];
        dp1[1] = max(nums[0], nums[1]);
        for (int i = 2; i < n - 1; i++) {
            dp1[i] = max(nums[i] + dp1[i - 2], dp1[i - 1]);
        }

        // Case 2: Rob from house 1 to n-1
        dp2[0] = nums[1];  // Instead of nums[1], since we start from index 1
        dp2[1] = max(nums[1], nums[2]);
        for (int i = 2; i < n - 1; i++) {
            dp2[i] = max(nums[i + 1] + dp2[i - 2], dp2[i - 1]);
        }

        return max(dp1[n - 2], dp2[n - 2]);
    }
};
