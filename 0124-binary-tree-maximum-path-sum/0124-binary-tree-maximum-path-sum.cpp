/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int maxSum = INT_MIN;
        calculateMaxPathSum(root, maxSum);
        return maxSum;
    }

private:
    int calculateMaxPathSum(TreeNode* node, int& maxSum) {
        if (!node){
            return 0;
        } 
    
        int leftSum = max (0,calculateMaxPathSum(node->left, maxSum));
        int rightSum = max (0,calculateMaxPathSum(node->right, maxSum));
        maxSum = max(maxSum, leftSum + rightSum + node->val);

        return node->val + max(leftSum, rightSum);
    }
};
