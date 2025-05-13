class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> seen;

        while (n != 1 && seen.find(n) == seen.end()) {
            seen.insert(n);
            int sum =0;
            while(n>0){
                int digit = n%10;
                n=n/10;
                sum += (digit*digit);
            }
            n= sum;
        }
        return n==1;
    
    }
};