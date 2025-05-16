class Solution {
public:
    bool checkPalindrome(string s, int start, int end){
        while(start<=end){
            if(s[start]!=s[end]){
                return false;
                
            }
            start++;
            end--;
        }
        return true;
    }
    int countSubstrings(string s) {
        int n = s.length();
        int countSub = 0; 
        for(int i=0;i<n;i++){
            for(int j=i;j<n ;j++){
                if(checkPalindrome(s, i, j)){
                    countSub += 1;
                }
            }
        }
        return countSub;
    }
};