class Solution {
    public int[] twoSum(int[] nums, int target) {
        
        int[] ans = new int[2];
        int n = nums.length;
        for(int i=0;i<n;i++){
            int remainingSum = target - nums[i];
            for(int j=i+1;j<n;j++){
                if(remainingSum == nums[j]){
                    return new int[] { i, j };
                }
            }

        }
        return new int[] {};
    }
}