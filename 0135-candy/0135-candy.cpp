class Solution {
public:
    int candy(vector<int>& ratings) {
        
        int n = ratings.size();
        vector <int> allocated(n,1);
        int sum=0;

        for(int i=1;i< n ;i++){
            if(ratings[i]> ratings[i-1]){
                allocated[i] = allocated[i-1]+1; 
            }
        }
        for(int i=n-2;i>=0 ;i--){
            if(ratings[i]> ratings[i+1]){
                allocated[i] = max(allocated[i], allocated[i + 1] + 1);
            }
        }
        for(int i=0;i< n ;i++){
            sum = sum + allocated[i];
        }
        return sum;
    }
};