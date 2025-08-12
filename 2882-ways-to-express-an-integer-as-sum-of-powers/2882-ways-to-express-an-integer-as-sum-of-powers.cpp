class Solution {
public:
    const int MOD = 1e9 + 7;

int n, x;
vector<long long> powers;
vector<vector<int>> dp;

// Recursive function with memoization
int dfs(int idx, int target) {
    if (target == 0) return 1;               // Found a valid set
    if (target < 0 || idx >= (int)powers.size()) return 0; // Not possible
    
    if (dp[idx][target] != -1) return dp[idx][target];
    
    // Option 1: Skip current power
    long long ways = dfs(idx + 1, target) % MOD;
    
    // Option 2: Take current power
    ways = (ways + dfs(idx + 1, target - powers[idx])) % MOD;
    
    return dp[idx][target] = ways;
}

int numberOfWays(int N, int X) {
    n = N; 
    x = X;
    powers.clear();
    
    // Step 1: Generate all possible powers <= n
    for (int i = 1; pow(i, x) <= n; i++) {
        powers.push_back((long long)pow(i, x));
    }
    
    // Step 2: Initialize dp
    dp.assign(powers.size(), vector<int>(n + 1, -1));
    
    // Step 3: Start recursion
    return dfs(0, n) % MOD;
}
};