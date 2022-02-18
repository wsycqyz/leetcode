/*
 * @lc app=leetcode id=257 lang=cpp
 *
 * [257] Binary Tree Paths
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
    vector<vector<int>> path;
    void helper(TreeNode *root, vector<int>& tmp) {
        tmp.push_back(root->val);
        if (!root->left&&!root->right) {
            path.push_back(tmp);
        }
        if (root->left) {
            helper(root->left, tmp);
        }
        if (root->right) {
            helper(root->right, tmp);
        }
        tmp.pop_back();
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> re;
        vector<int> tmp;
        if (!root) { return re; }
        helper(root, tmp);
        //cout << path.size();
        for (int i=0;i<path.size();i++) {
            string a=std::to_string(path[i][0]);
            for (int j=1;j<path[i].size();j++) {
                a+="->";
                a+=std::to_string(path[i][j]);
            }
            re.push_back(a);
        }
        return re;
    }
};
// @lc code=end

