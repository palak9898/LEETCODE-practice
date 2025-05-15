
class Solution {
public:
    long long minimumSteps(string s) {
        long long steps = 0;     
        long long blackCnt = 0;  

        for (char c : s) {
            if (c == '1') {
                ++blackCnt;         
            } else {                 
                steps += blackCnt;   
            }
        }
        return steps;
    }
};
