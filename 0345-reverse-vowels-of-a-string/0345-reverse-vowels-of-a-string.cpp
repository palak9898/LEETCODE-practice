class Solution {
public:
    bool vowelCheck(char c){
        return c == 'A' || c == 'a' ||
           c == 'E' || c == 'e' ||
           c == 'I' || c == 'i' ||
           c == 'O' || c == 'o' ||
           c == 'U' || c == 'u';
    }
    string reverseVowels(string s) {
        int i=0, j=s.size()-1;
        while(i<j){
            while(i<j && (!vowelCheck(s[i]))){
                i++;
            }
            while(i<j && (!vowelCheck(s[j]))){
                j--;
            }
            if(i<j){
                swap(s[i],s[j]);
                i++;
                j--;
            }
        }         
        return s;
    }
};
