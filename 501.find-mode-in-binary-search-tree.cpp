/*
 * @lc app=leetcode id=501 lang=cpp
 *
 * [501] Find Mode in Binary Search Tree
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
    map<int,int> m;
    void helper(TreeNode *root) {
        if (!root) {
            return;
        }
        helper(root->left);
        m.find(root->val)==m.end()?m[root->val]=1:m[root->val]++;
        helper(root->right);
    }
    vector<int> findMode(TreeNode* root) {
        vector<int> re;
        helper(root);
        int a=0;
        for (auto p:m) {
            cout << p.first << " " << p.second << endl;
            a=max(a,p.second);
        }
        for (auto p:m) {
            if (p.second==a) {
                if (re.size()==0) { 
                    re.push_back(p.first);
                } else if (re.back()!=p.first) {
                    re.push_back(p.first);
                }
            }
        }
        return re;
    }
};
// @lc code=end

