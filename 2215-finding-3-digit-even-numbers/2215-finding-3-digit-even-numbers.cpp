class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
    unordered_set<int> seen;
    int n = digits.size();

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (j == i) continue;
            for (int k = 0; k < n; ++k) {
                if (k == i || k == j) continue;

                int d1 = digits[i];
                int d2 = digits[j];
                int d3 = digits[k];

                if (d1 == 0) continue;         // No leading zeros
                if (d3 % 2 != 0) continue;     // Must be even

                int number = d1 * 100 + d2 * 10 + d3;
                seen.insert(number);
            }
        }
    }

    vector<int> result(seen.begin(), seen.end());
    sort(result.begin(), result.end());  // Sort before returning
    return result;
}
};