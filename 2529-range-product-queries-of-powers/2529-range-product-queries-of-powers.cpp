class Solution {
public:
    vector<int> productQueries(int n, vector<vector<int>>& queries) {
        const int MOD = 1e9 + 7;
        vector<int> arr;
        int size1 = queries.size();
        for (int i = 0; n > 0; i++) {
            if (n & 1) {
                arr.push_back(1 << i); 
            }
            n >>= 1;
        }

        vector<int> ans;
        long long product;
        for (int i = 0; i < size1; i++) {
            int end = queries[i][1];
            product = 1;
            for (int start = queries[i][0]; start <= end; start++) {
                product = (product * arr[start]) % MOD;
            }
            ans.push_back(product);
        }
        return ans;
    }
};