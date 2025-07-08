class Solution {
public:
    string simplifyPath(string path) {
        string res, temp;
        int n = path.length();
        stack<string> st;

        for(int i=0;i<n;i++){
            if(path[i]=='/'){
                continue;
            }
            temp ="";
            while(i<n && path[i]!='/'){
                temp += path[i];
                i++;
            }

            if(temp=="."){continue;
            }
            else if(temp ==".."){
                if(!st.empty()){
                    st.pop();
                }
            }
            else{
                st.push(temp);
            }
        }

        while(!st.empty()){
            res = "/" + st.top() + res ;
            st.pop();
        }
        return res.empty() ? "/": res; 
    }
};