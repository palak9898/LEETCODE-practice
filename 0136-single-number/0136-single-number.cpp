class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> mp;

        for(int val : nums){
            mp[val]++;
        }

        for(auto& pair : mp){
            if(pair.second == 1){
               return(pair.first);
            }
        }
        return 0;
    }
};