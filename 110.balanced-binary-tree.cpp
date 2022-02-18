/*
 * @lc app=leetcode id=110 lang=cpp
 *
 * [110] Balanced Binary Tree
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
        if (root==NULL) {
            return d;
        }
        int a,b;
        a=helper(root->left,d+1);
        if (a==-1) return -1;
        b=helper(root->right,d+1);
        if (b==-1) return -1;
        if (a-b>1||b-a>1) {
            return -1;
        }
        return max(a,b);
    }
    bool isBalanced(TreeNode* root) {
        if (helper(root,0)==-1) return false;
        return true;
    }
};
// @lc code=end

