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
    
    set<int> tree;
    
    void compose_set(TreeNode* root) {
        if (root == NULL) return;
        tree.insert(root->val);
        compose_set(root->left);
        compose_set(root->right);
        
    }
    
    bool findTarget(TreeNode* root, int k) {
        compose_set(root);
        for (int n : tree) {
            if (tree.find(k - n) != tree.end()) {
                if (n != k/2) return true;
            }
            if (n > k) return false;
        } 
       return false; 
    }
};