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
    //_________________RECURSIVE_________________
    void solve(TreeNode *root, vector<int> &res){
        if(root==NULL) return;

        solve(root->left,res);
        solve(root->right,res);
        res.push_back(root->val);
    }

    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;
        // solve(root, res);
        if(root==NULL) return res;
        stack<TreeNode *>st1,st2;
        st1.push(root);

        while(!st1.empty()){
            root = st1.top();
            st1.pop();
            st2.push(root);

            if(root->left!=NULL){
                st1.push(root->left);
            }
            if(root->right!=NULL){
                st1.push(root->right);
            }
        }

        while(!st2.empty()){
            res.push_back(st2.top()->val);
            st2.pop();
        }
        return res;
    }
};