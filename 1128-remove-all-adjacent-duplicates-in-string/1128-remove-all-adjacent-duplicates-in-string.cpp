class Solution {
public:
    string removeDuplicates(string s) {
        string result= "";
        stack<char> stk;
        int n = s.length();
        stk.push(s[0]);
        for(int i=1;i<n ;i++){
            int element = s[i];
            if(!stk.empty() && stk.top()==element){
                stk.pop();
            }
            else {
                stk.push(element);
            }
        }
        while(!stk.empty()){
            result = result + stk.top();
            stk.pop();
        }
        reverse(result.begin(), result.end());
        return result;
    }
};