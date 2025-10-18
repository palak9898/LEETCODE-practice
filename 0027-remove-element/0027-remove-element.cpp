class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int count =0;
        for(int i=0;i<n;i++){
            if(nums[i]==val){
                nums[i]=0;
                count++;
            }
        }
        sort(nums.begin(), nums.end(), [](int a, int b){
            return a>b;
        });
        return (n-count);
    }
};