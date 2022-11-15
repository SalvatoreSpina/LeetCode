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

    int countNodes(TreeNode* root) {
        if (!root) return 0;
        int left = 0, right = 0;
        TreeNode *most_left = root, *most_right = root;
        
        while (most_left) {
            left++;
            most_left = most_left->left;
        }
        while (most_right) {
            right++;
            most_right = most_right->right;
        }
        
        return (left == right ? pow(2, left) - 1 : 1 + countNodes(root->left) + countNodes(root->right));
    }

};