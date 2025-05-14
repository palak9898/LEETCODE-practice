class Solution {
public:
    void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    }

    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int i = 0;  

        for (int j = 0; j < n; j++) {
            if (nums[j] != 0) {
                swap(nums[i], nums[j]);
                i++;
            }
        }
    }
};