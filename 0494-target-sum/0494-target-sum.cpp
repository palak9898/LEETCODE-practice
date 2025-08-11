class Solution {
public:
    int n;
    int solve(vector<int>& nums, int index, int currentsum, int target) {
        if (index == nums.size()) {

            if (currentsum == target) {
                return 1;
            } else {
                return 0;
            }
        }
        int plus = solve(nums, index + 1, currentsum + nums[index], target);
        int minus = solve(nums, index + 1, currentsum - nums[index], target);
        return plus + minus;
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        int currentsum = 0;
        return solve(nums, 0, currentsum, target);
    }
};