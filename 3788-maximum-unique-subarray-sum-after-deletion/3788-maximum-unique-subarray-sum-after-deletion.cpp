class Solution {
public:
    int maxSum(vector<int>& nums) {
        unordered_map <int, int> mp;
        vector<int> result;
        for(int i : nums){
            mp[i]++;
        }
        for(auto& pair : mp){
            if(pair.second >=1 ){
                result.push_back(pair.first);
            }
        }
        int n = result.size();
        if(n==1){
            if(result[0]<0){
                return result[0];
            }
        }
        int maxi; 
        maxi = result[0];
        for(int i=1;i<n;i++){
            
            if(maxi < result[i]){
                maxi = result[i];
            }
        }
        if(maxi < 0){
            return maxi;
        }
        else{
            int sum =0;
            for(int i=0;i<n;i++){
                if(result[i]>0){
                    sum += result[i];
                }     
            }
            return sum;
        }
    }
};