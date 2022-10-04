class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == NULL || targetSum < 0)
            return (!targetSum);
        
        return hasPathSum(root->left, targetSum - root->val)
            || hasPathSum(root->right, targetSum - root->val);
    }
};