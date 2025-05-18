class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> reqMap;
        int start = 0;
        int MaxLength = 0;

        for(int i =0; i <s.length(); i++){
            char currentChar = s[i];

            if(reqMap.find(currentChar) != reqMap.end() && reqMap[currentChar]>= start){
                start = reqMap[currentChar] +1;
                
            }
            reqMap[currentChar] = i;

            MaxLength = max(MaxLength, i - start + 1);
        }
        return MaxLength;
    }
};