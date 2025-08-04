class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {

        vector<uint64_t> dp(target + 1, 0);
        dp[0] = 1;
        for (int i = 1; i <= target; ++i) {
            for (int num : nums) {
                if (i - num >= 0) {
                    dp[i] += dp[i - num];
                }
            }
        }
        return (dp[target] > INT_MAX) ? -1 : (int)dp[target];
    }
};