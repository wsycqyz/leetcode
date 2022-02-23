/*
 * @lc app=leetcode id=124 lang=cpp
 *
 * [124] Binary Tree Maximum Path Sum
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
    int helper(TreeNode* root) {
        if (!root->left&&!root->right) {
            re=max(re, root->val);
            return root->val;
        }
        int a,b,c;
        if (root->left) {a=helper(root->left);c=a;}
        if (root->right) {b=helper(root->right);c=b;}
        cout << endl;
        if (root->left&&root->right) {
            re=max(re, max(a+root->val,b+root->val));
            re=max(re, max(a+b+root->val, root->val));
            //cout << root->val << " " << max(a+root->val, b+root->val) << endl;
            return max(root->val, max(a+root->val, b+root->val));
        }
        re=max(re, max(c+root->val,root->val));
        //cout << root->val << " " << max(c+root->val, root->val) << endl;
        return max(c+root->val, root->val);
        
    }
    int maxPathSum(TreeNode* root) {
        int max1;
        if (!root) return 0;
        re=root->val;
        max1=helper(root);
        return max(re,max1);
    }
};
// @lc code=end

