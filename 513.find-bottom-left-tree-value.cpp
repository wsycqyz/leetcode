/*
 * @lc app=leetcode id=513 lang=cpp
 *
 * [513] Find Bottom Left Tree Value
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
    int depth;

    void helper(TreeNode* root, int a) {
        if (root==NULL) {
            return;
        }
        if (root->left==NULL && root->right==NULL) {
            if (a>depth) {
                depth=a;
                re=root->val;
            }
            return;
        }
        if (root->left) {
            helper(root->left,a+1);
        }
        if (root->right) {
            helper(root->right,a+1);
        }
        return;
    }

    int findBottomLeftValue(TreeNode* root) {
        re=0;depth=0;
        helper(root, 1);
        return re;
    }
};
// @lc code=end

