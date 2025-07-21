class Solution {
public:
    string makeFancyString(string s) {
        string result ="";
        int n = s.length();
        for(int i=0; i<n; i++){
            int len = result.length();

            if(len>= 2 && result[len-1]==s[i] && result[len-2]==s[i]){
                continue;
            }
            result += s[i];
        }    
        return result;
    }
};