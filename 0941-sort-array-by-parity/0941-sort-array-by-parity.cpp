class Solution {
public:
    
    vector<int> sortArrayByParity(vector<int>& nums) {
        int start=0,n=nums.size();
        vector<int> result(n); 
        int end = n-1; 
        
        for(int i=0;i<n;i++){
            if(nums[i]%2 == 0){
                result[start]= nums[i];
                start++;
            }
            if(nums[i]%2 != 0){
                result[end]= nums[i];
                end--;
            }
        }
        return result;
        
    }
};