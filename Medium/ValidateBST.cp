class Solution {

public:
    bool help(TreeNode* root, long min, long max) {
        if (!root) return true;
        if (root->val >= max || root->val <= min) return false;
        return help(root->left, min, root->val) && help(root->right, root->val, max);
    }

private:
    bool isValidBST(TreeNode* root) {
        return help(root, LONG_MIN, LONG_MAX);
    }
};