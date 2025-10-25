class Solution {
public:
    void backtrack(vector<string>& result,string current, int start, int end, int n){
        if(current.size()==2*n){
            result.push_back(current);
            return;
        }
        if (start < n)  // can add '('
        backtrack(result, current + '(', start + 1, end, n);

        if (end < start)  // can add ')'
        backtrack(result, current + ')', start, end + 1, n);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        string current=""; 
        backtrack(result,current, 0, 0, n);
        return result;
    }
};