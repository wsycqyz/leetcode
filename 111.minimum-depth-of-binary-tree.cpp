/*
 * @lc app=leetcode id=111 lang=cpp
 *
 * [111] Minimum Depth of Binary Tree
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
    int helper(TreeNode* root, int d) {
        if (!root->left&&!root->right) {
            return d;
        }
        if (!root->left&&root->right) {
            return helper(root->right,d+1);
        }
        if (root->left&&!root->right) {
            return helper(root->left,d+1);
        }
        return min(helper(root->left,d+1), helper(root->right,d+1));
    }
    int minDepth(TreeNode* root) {
        if (root==NULL) {
            return 0;
        }
        return helper(root, 1);
    }
};
// @lc code=end

