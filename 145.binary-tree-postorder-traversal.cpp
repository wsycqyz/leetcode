/*
 * @lc app=leetcode id=145 lang=cpp
 *
 * [145] Binary Tree Postorder Traversal
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
    void helper(TreeNode* root, vector<int>& re) {
        if (root==NULL) {
            return;
        }
        helper(root->left,re);
        helper(root->right,re);
        re.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> re;
        helper(root,re);
        return re;
    }
};
// @lc code=end

