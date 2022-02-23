/*
 * @lc app=leetcode id=113 lang=cpp
 *
 * [113] Path Sum II
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
    int t;
    vector<vector<int>> re;
    void helper(TreeNode* root, vector<int>& path, int sum) {
        if (!root) return;
        sum+=root->val;
        path.push_back(root->val);
        if (!root->left&&!root->right) {
            if (sum==t) {
                re.push_back(path);
            }
            path.pop_back();
            return;
        }
        helper(root->left,path,sum);
        helper(root->right,path,sum);
        path.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> path;
        t=targetSum;
        helper(root,path,0);
        return re;
    }
};
// @lc code=end

