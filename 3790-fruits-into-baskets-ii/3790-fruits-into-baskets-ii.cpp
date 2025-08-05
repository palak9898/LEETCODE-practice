class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n = fruits.size();
        int count=0;
        int j=0;
        vector<bool> allocated(n, false);
        for(int i=0;i<n ;i++){
            j=0;
            while(j<n ){
                if(fruits[i] <= baskets[j] && allocated[j] == false){
                    allocated[j] = true;
                    break;
                }
                else{
                    j++;
                }
                
            }
            
        }
        for(int i=0;i<n ;i++){
            if(allocated[i]==false){
                count = count+1;
            }
        }
        return count;
    }
};