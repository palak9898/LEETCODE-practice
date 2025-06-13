class Solution {
public:
    bool isSubstring(string repeated , string b){
        int n1 = repeated.size();
        int n2 = b.size();

        for(int i=0; i<= n1-n2 ; i++){
            int j=0;
            while(j < n2 && repeated[i+j] == b[j] ){
                j++;
            }
            if(j==n2){
                return true;
            } 
        }
        return false;
    }
    int repeatedStringMatch(string a, string b) {

        int lengthA = a.size();
        int lengthB = b.size();
        int count = 0;
        string repeated = "";

        while (repeated.length() < lengthB) {
            repeated += a;
            count++;
        }
        if( isSubstring(repeated, b)){
            return count;
        }
        repeated += a;
        count++;
        if( isSubstring(repeated, b)){
            return count;
        }
        return -1;
    }
};