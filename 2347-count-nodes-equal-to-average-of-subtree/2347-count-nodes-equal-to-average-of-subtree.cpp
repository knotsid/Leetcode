class Solution {
    int res = 0;

public:
    int averageOfSubtree(TreeNode* root) {
        postOrder(root);
        return res;
    }

    pair<int, int> postOrder(TreeNode* node) {
        if (!node) {
            return {0, 0};
        }

        auto left = postOrder(node->left);
        auto right = postOrder(node->right);

        int totalSum = left.first + right.first + node->val;
        int totalCount = 1 + left.second + right.second;
        res += (node->val == totalSum / totalCount);

        return {totalSum, totalCount};
    }
};