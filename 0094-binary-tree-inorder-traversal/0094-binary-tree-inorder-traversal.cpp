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

    void solve(TreeNode* root, vector<int> &res){
        if(root == NULL){
            return;
        }
        stack<TreeNode*> st;
        // st.push(root);
        while(!st.empty() || root){
            while(root){
                st.push(root);
                root = root -> left;
            }
            root = st.top();
            st.pop();
            res.push_back(root->val);
            root = root ->right;
        }
        return;
    }


    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        solve(root, res);
        return res;
    }
};