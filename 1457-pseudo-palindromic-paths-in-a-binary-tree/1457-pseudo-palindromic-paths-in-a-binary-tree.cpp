class Solution {
public:
    int pseudoPalindromicPaths(TreeNode* root) {
        int count = 0, path = 0;
        stack<pair<TreeNode*, int>> st;
        st.push({root, 0});

        while (!st.empty()) {
            auto [node, path] = st.top();
            st.pop();

            if (node != nullptr) {
                path = path ^ (1 << node->val);
                if (node->left == nullptr && node->right == nullptr) {
                    if ((path & (path - 1)) == 0) {
                        ++count;
                    }
                } else {
                    st.push({node->right, path});
                    st.push({node->left, path});
                }
            }
        }
        return count;
    }
};



