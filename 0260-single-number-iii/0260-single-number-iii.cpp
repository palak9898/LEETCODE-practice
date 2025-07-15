class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int , int> mp;
        vector<int> result;
        for(int ch : nums){
            mp[ch]++;
        }
        for(auto& pair : mp){
            if(pair.second == 1){
                result.push_back(pair.first);
            }
        }
        return result;
    }
};