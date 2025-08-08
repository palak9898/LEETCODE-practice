class Solution {
public:
    bool solve(vector<int>& nums, int index , int requiredSum,vector<vector<int>>& dp ){
        if(requiredSum == 0 ){
            return true;
        }
        if(index >= nums.size()){
            return false;
        }
        if(dp[index][requiredSum] != -1){
            return dp[index][requiredSum];
        }
        bool take = false;
        if(nums[index] <= requiredSum){
            take = solve(nums, index +1, requiredSum - nums[index],dp);
        }
        
        bool nottake = solve(nums, index+1,requiredSum ,dp);

        return dp[index][requiredSum] = take || nottake;
    }
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int s = accumulate(begin(nums), end(nums), 0);
        
        if(s%2 != 0){
            return false;
        }
        int requiredSum = s/2;
        vector<vector<int>>dp (n+1, vector<int>(requiredSum+1, -1));
        return solve(nums, 0, requiredSum, dp);
    }
};