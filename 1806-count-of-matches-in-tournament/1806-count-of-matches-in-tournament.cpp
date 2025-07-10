class Solution {
public:
    int numberOfMatches(int n) {

    /*    int matches;
        int advance;
        int sum;
        if(n==1){
            return 1;
        }
        while(n>=1){
            if(n%2 == 0){
                matches = n/2;
                advance = n/2;
                n = advance;
            }
            if(n%2 != 0){
                matches = (n-1)/2;
                advance = (n-1)/2 + 1;
                n = advance;
            }
            sum = sum + matches;
        }*/
        return n-1;
    }
};