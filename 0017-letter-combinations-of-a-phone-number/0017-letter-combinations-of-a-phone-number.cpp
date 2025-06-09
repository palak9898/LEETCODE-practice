class Solution {
public:
    void backtrack(int index, const string& digits, vector<string>& phoneMap, vector<string>& result, string& current ){
        if(index == digits.size()){
            result.push_back(current);
            return;
        }
        string letters = phoneMap[digits[index]- '0'];
        for(char letter: letters){
            current.push_back(letter);
            backtrack(index+1, digits, phoneMap, result, current );
            current.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits == ""){
            return {};
        }
        vector<string> phoneMap = {
            "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"
        };
        vector<string> result;
        string current;
        backtrack(0, digits, phoneMap, result, current );
        return result;

    }
};