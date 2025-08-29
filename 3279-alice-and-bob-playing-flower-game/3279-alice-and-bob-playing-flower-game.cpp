class Solution {
public:
    long long flowerGame(int n, int m) {
        long long xEven = n / 2;
        long long yEven = m / 2;
        long long xOdd  = (n + 1) / 2;
        long long yOdd  = (m + 1) / 2;
       return xEven * yOdd + yEven * xOdd;
    }
};