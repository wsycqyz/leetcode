/*
 * @lc app=leetcode id=98 lang=c
 *
 * [98] Validate Binary Search Tree
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


bool isValidBST(struct TreeNode* root){

    bool dfs(struct TreeNode* root, struct TreeNode* min, struct TreeNode* max) {
        struct TreeNode* max1=max;

        if (min&&root->val<=min->val) {
            return false;
        }
        if (max&&root->val>=max->val) {
            return false;
        }
        if (root->left!=NULL) {
            if (root->val<=root->left->val) {
                return false;
            }
            if (max==NULL||root->val<max->val) {
                max=root;
            }
            if (dfs(root->left, min, max)==false) {
                return false;
            }
        }
        if (root->right!=NULL) {
            if (root->val>=root->right->val) { 
                return false;
            }
            if (min==NULL||root->val>min->val) {
                min=root;
            }
            if (dfs(root->right, min, max1)==false) {
                return false;
            }
        }
        return true;
    }

    return dfs(root, NULL, NULL);
}
// @lc code=end

