class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n == 0) return 0;

        vector<int> leftArray(n);
        vector<int> rightArray(n);
        int water = 0;

        // Fill leftArray
        leftArray[0] = height[0];
        for(int i = 1; i < n; i++){
            leftArray[i] = max(height[i], leftArray[i - 1]);
        }

        // Fill rightArray
        rightArray[n - 1] = height[n - 1];
        for(int i = n - 2; i >= 0; i--){
            rightArray[i] = max(height[i], rightArray[i + 1]);
        }

        // Calculate trapped water
        for(int i = 0; i < n; i++){
            int minHeight = min(leftArray[i], rightArray[i]);
            water += minHeight - height[i];
        }

        return water;
    }
};
