class Solution {
public:
    string removeKdigits(string num, int k) {
        vector<char> stack;

        for (char digit : num) {
            while (!stack.empty() && k > 0 && stack.back() > digit) {
                stack.pop_back();
                k--;
            }
            stack.push_back(digit);
        }

        // Remove remaining digits from the end if k > 0
        while (k > 0 && !stack.empty()) {
            stack.pop_back();
            k--;
        }

        // Build the result string and remove leading zeros
        string result = "";
        bool leadingZero = true;

        for (char digit : stack) {
            if (leadingZero && digit == '0')
                continue;
            leadingZero = false;
            result += digit;
        }

        return result.empty() ? "0" : result;
    }
};