class Solution {
public:
    vector<vector<double>> memo;

    double prob(int a, int b) {
        if (a <= 0 && b <= 0) return 0.5;
        if (a <= 0) return 1.0;
        if (b <= 0) return 0.0;
        if (memo[a][b] >= 0.0) return memo[a][b];

        double res = 0.25 * (
            prob(a - 4, b) +
            prob(a - 3, b - 1) +
            prob(a - 2, b - 2) +
            prob(a - 1, b - 3)
        );
        memo[a][b] = res;
        return res;
    }

    double soupServings(int n) {
        if (n > 4800) return 1.0;            // optimization for large n
        int m = (n + 24) / 25;               // scale to 25 mL units
        memo.assign(m + 1, vector<double>(m + 1, -1.0));
        return prob(m, m);
    }
};