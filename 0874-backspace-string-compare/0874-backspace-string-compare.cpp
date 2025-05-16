class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st1;
        stack<char> st2;
        int n1 = s.size();
        int n2 = t.size();
        for(int i=0;i<n1;i++){
            if(s[i]=='#'){
                if(!st1.empty()){
                    st1.pop();
                }  
            }
            else{
                    st1.push(s[i]);
                }
        }
        for(int i=0;i<n2;i++){
            if(t[i]=='#'){
                if(!st2.empty()){
                    st2.pop();
                }   
            }
            else{
                    st2.push(t[i]);
            }
        }
        return st1==st2;
    }
};