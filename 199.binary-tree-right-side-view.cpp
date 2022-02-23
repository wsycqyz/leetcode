/*
 * @lc app=leetcode id=199 lang=cpp
 *
 * [199] Binary Tree Right Side View
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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> re;
        vector<TreeNode*> t;
        if (!root) return re;
        t.push_back(root);
        int i=0,j=1;
        while(i<j) {
            re.push_back(t.back()->val);
            while(i<j) {
                if (t[i]->left) t.push_back(t[i]->left);
                if (t[i]->right) t.push_back(t[i]->right);
                i++;
            }
            j=t.size();
        }        
        return re;
    }
};
// @lc code=end

