/*
 * @lc app=leetcode id=101 lang=c
 *
 * [101] Symmetric Tree
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

bool solve(struct TreeNode* left, struct TreeNode* right) {
    if (left==NULL&&right==NULL) {
        return true;
    } else if (left==NULL&&right!=NULL) {
        return false;
    } else if (left!=NULL&&right==NULL) {
        return false;
    }
    if (left->val!=right->val) {
        return false;
    }
    if (solve(left->left, right->right)==false) {
        return false;
    }
    if (solve(left->right, right->left)==false) {
        return false;
    }
    return true;
}

bool isSymmetric(struct TreeNode* root){
    if (root==NULL) {
        return true;
    }
    return solve(root->left, root->right);
}
// @lc code=end

