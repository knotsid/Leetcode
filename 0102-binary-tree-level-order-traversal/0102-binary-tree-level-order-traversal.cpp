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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==NULL)
            return {};
        queue<TreeNode*> q;
        vector<vector<int>> res;
        q.push(root);
        while(!q.empty()){
            int k = q.size();
            vector<int> level;            
            while(k--){
                TreeNode* temp = q.front();q.pop();
                // cout<<temp->val<<" ";
                level.push_back(temp->val);
                if(temp->left!=NULL)q.push(temp->left);
                if(temp->right!=NULL)q.push(temp->right);
            }
            cout<<endl;
            res.push_back(level);
        }
        return res;
    }
};