class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> myMap;
        int n = nums.size();

        for(int i=0;i<n;i++){
            if(myMap.find(nums[i])!= myMap.end()){
                return nums[i];
            }
            myMap[nums[i]]++;
        }
        return 0;
    }
};