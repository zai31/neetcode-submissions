class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=(int)nums.size();
        int cnt=0;
        sort(nums.begin(),nums.end());
         unordered_set<int> store(nums.begin(), nums.end());
        if(nums.empty()) return 0;

        for (int num : nums) {
            int streak = 0, curr = num;
while (store.find(curr) != store.end())  
      {
        streak++;
        curr++;
      }
        cnt=max(streak,cnt);

        }
        
        return cnt;
    }
    
};
