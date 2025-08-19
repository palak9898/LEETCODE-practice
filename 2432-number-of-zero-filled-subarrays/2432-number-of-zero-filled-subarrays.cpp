class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long total = 0, countZeros = 0;
        for (int num : nums) {
            if (num == 0) {
                countZeros++;
                total += countZeros; // each new zero extends all previous zero-subarrays
            } else {
                countZeros = 0;
            }
        }
        return total;
    }
};
