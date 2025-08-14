class Solution {
public:
    string largestGoodInteger(string num) {
        int n = num.length();
        int current;
        int maxi = -1;
        for (int i = 0; i <= n - 3; i++) {
            if ((num[i] == num[i + 1]) && (num[i] == num[i + 2])) {
                current = (num[i] - '0');
                maxi = max(maxi, current);
            }
        }
        if (maxi == -1) {
            return "";
        }
        string result;
        for (int k = 0; k < 3; k++) {
            result.push_back(char(maxi + '0'));
        }
        return result;
    }
};