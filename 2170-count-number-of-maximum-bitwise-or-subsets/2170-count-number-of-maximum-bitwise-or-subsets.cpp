class Solution {
public:
    int count=0;
    int maxOr =0;
    void backtrack(int index ,vector<int>& nums,int currentOr){
        if(index == nums.size()){
            if(currentOr == maxOr){
                count++;
            }
            return;
        }
        
        backtrack(index+ 1, nums, currentOr | nums[index]);
        backtrack(index+ 1, nums, currentOr );

    }
    int countMaxOrSubsets(vector<int>& nums) {
        
        for( int num : nums){
            maxOr = maxOr | num;
        }
        backtrack(0,nums,0);
        return count;
    }
};