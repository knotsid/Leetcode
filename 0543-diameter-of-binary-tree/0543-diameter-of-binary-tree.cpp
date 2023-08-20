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
    int height(TreeNode* node, int &res){
        if(node == NULL){
            return 0;
        }
        int left = height(node->left, res);
        int right = height(node->right, res);
        res = max(res, left+right);
        return 1 + max(left, right);
        
    }

    int diameterOfBinaryTree(TreeNode* root) {
        int res = 0;
        height(root, res);
        return res;
    }
};