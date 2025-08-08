class Solution {
public:
int n ;
    int solve(int index, int amount, vector<int>& coins, vector<vector<int>>& dp ){
        if(amount == 0){
            return 1;
        }
        if(index == n){
            return 0;
        }
        if(dp[index][amount] != -1){
            return dp[index][amount];
        }
        int pick = 0;
        if (coins[index] <= amount) {
            pick = solve(index, amount - coins[index], coins, dp);
        }
        
        int notpick = solve(index+1, amount,coins, dp);
        return dp[index][amount] = pick + notpick;
    }

    int change(int amount, vector<int>& coins) {
        n = coins.size();
        vector<vector<int>> dp(n, vector<int>(amount+1, -1));
        return solve(0,amount ,coins, dp);
    }
};