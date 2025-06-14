class Solution {
public:
    int minMaxDifference(int num) {

        string s = to_string(num);
        string minString = s;
        string maxString = s;
        char maxDigit = '0';
        char minDigit = '0';
        for (char& ch : s) {
            if (ch != '9') {
                maxDigit = ch;
                break;
            }
        }
        for (char& ch : maxString) {
            if (ch == maxDigit) {
                ch = '9';
            }
        }
        int maxi = stoi(maxString);
        for (char& sh : s) {
            if (sh != '0') {
                minDigit = sh;
                break;
            }
        }
        for (char& sh : minString) {
            if (sh == minDigit) {
                sh = '0';
            }
        }
        int mini = stoi(minString);
        return maxi - mini;
    }   
};