class Solution {
public:
    int numSubmat(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();
        vector<vector<int>> height(m, vector<int>(n, 0));
        
        // Build height matrix
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (mat[i][j] == 1) {
                    height[i][j] = (i > 0 ? height[i-1][j] + 1 : 1);
                }
            }
        }
        
        int result = 0;
        // Count submatrices row by row
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (height[i][j] > 0) {
                    int minHeight = height[i][j];
                    for (int k = j; k >= 0; k--) {
                        if (height[i][k] == 0) break;
                        minHeight = min(minHeight, height[i][k]);
                        result += minHeight;
                    }
                }
            }
        }
        return result;
    }
};
;