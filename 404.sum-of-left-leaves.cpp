/*
 * @lc app=leetcode id=404 lang=cpp
 *
 * [404] Sum of Left Leaves
 */

// @lc code=start
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
    int re;
    void helper(TreeNode* root) {
        if (!root) return;
        if ((root->left)&&!(root->left->left)&&!(root->left->right)) {
            re+=root->left->val;
        }
        helper(root->left);
        helper(root->right);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        re=0;
        if (!root) return 0;
        helper(root);
        return re;
    }
};
// @lc code=end

