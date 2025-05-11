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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int, int> inMap;
        for (int i = 0; i < inorder.size(); i++) {
            inMap[inorder[i]] = i;
        }
        return funbuildTree(inorder, 0, inorder.size() - 1,
                            preorder, 0, preorder.size() - 1,
                            inMap);
    }

    TreeNode* funbuildTree(vector<int>& inorder, int instart, int inend,
                           vector<int>& preorder, int prestart, int preend,
                           map<int, int>& inMap) {
        if (instart > inend || prestart > preend) {
            return NULL;
        }

        TreeNode* root = new TreeNode(preorder[prestart]);
        int inroot = inMap[root->val];
        int numsleft = inroot - instart;

        root->left = funbuildTree(inorder, instart, inroot - 1,
                                  preorder, prestart + 1, prestart + numsleft,
                                  inMap);
        root->right = funbuildTree(inorder, inroot + 1, inend,
                                   preorder, prestart + numsleft + 1, preend,
                                   inMap);
        return root;
    }
};
