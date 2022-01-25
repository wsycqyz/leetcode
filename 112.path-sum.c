/*
 * @lc app=leetcode id=112 lang=c
 *
 * [112] Path Sum
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
int t;
bool solve(struct TreeNode* node, int p) {
    if (node!=NULL) {
        p=p+node->val;
    } else {
        return false;
    }
    if (node->left==NULL&&node->right==NULL) {
        if (p==t) {
            return true;
        } else {
            return false;
        }
    }
    if (node->left!=NULL&&solve(node->left,p)==true) {
        return true;
    }
    if (node->right!=NULL&&solve(node->right,p)==true) {
        return true;
    }
    return false;
}

bool hasPathSum(struct TreeNode* root, int targetSum){
    t=targetSum;
    return solve(root, 0);
}
// @lc code=end

