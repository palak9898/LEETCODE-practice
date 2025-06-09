class Solution {
public:
    void backtrack(int start,vector<vector<int>>& result, vector<int>& subset,vector<int>& nums ){
        result.push_back(subset);

        for(int i=start; i<nums.size(); i++){
            if (i > start && nums[i] == nums[i - 1]) continue;
            subset.push_back(nums[i]);
            backtrack(i+1,result, subset,nums);
            subset.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        vector<int> subset;
        backtrack(0, result, subset,nums);
        return result;
    }
};