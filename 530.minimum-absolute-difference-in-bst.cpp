/*
 * @lc app=leetcode id=530 lang=cpp
 *
 * [530] Minimum Absolute Difference in BST
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
    void helper(TreeNode* root, vector<int>& path) {
        if (!root) return;
        int i;
        for (i=0;i<path.size();i++) {
            re=min(re, abs(path[i]-root->val));
        }
        path.push_back(root->val);
        helper(root->left, path);
        helper(root->right, path);
    }
    int getMinimumDifference(TreeNode* root) {
        re=INT_MAX;
        vector<int> path;
        helper(root,path);
        return re;
    }
};
// @lc code=end

