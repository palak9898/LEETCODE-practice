class Solution {
public:
    int makeTheIntegerZero(int num1, int num2) {
        for (int k = 1; k <= 60; k++) {
            long long x = 1LL * num1 - 1LL * k * num2;
            if (x < 0) continue;
            int pop = __builtin_popcountll(x);
            if (pop <= k && k <= x) {
                return k;
            }
        }
        return -1;
    }
};