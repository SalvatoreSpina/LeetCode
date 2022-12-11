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

    int subTreesum(TreeNode* root, int &max_path_sum) {
        if (!root) return 0;
        int l = max(0, subTreesum(root->left, max_path_sum));
        int r = max(0, subTreesum(root->right, max_path_sum));
        max_path_sum = max(max_path_sum, root->val + l + r);
        return root->val + max(l, r);
    }

public:

    int maxPathSum(TreeNode* root) {
        int max_path_sum = INT_MIN;
        subTreesum(root, max_path_sum);
        return max_path_sum;
    }
};