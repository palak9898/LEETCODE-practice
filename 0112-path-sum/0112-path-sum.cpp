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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == NULL){
            return false;
        }
        int remainingSum = targetSum - root->val;

        if(remainingSum == 0 && root->left == NULL && root->right == NULL){
            return true;
        }
        int left= false, right =false; 
        if(root->left){
            left = hasPathSum(root->left , remainingSum);
        }
        if(root->right){
            right = hasPathSum(root->right, remainingSum);
        }
        return left || right ;
    }
};