/*
 * @lc app=leetcode id=515 lang=cpp
 *
 * [515] Find Largest Value in Each Tree Row
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
    vector<int> largestValues(TreeNode* root) {
        vector<int> re;
        if (!root) {
            return re;
        }
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()) {
            int* rowMax = NULL;
            int size = q.size();
            for (int i=0; i<size; i++) {
                auto node = q.front();
                q.pop();
                if (rowMax) {
                    *rowMax = max(*rowMax, node->val);
                } else {
                    rowMax = new(int);
                    *rowMax = node->val;
                }
                if (node->left) {
                    q.push(node->left);
                }
                if (node->right) {
                    q.push(node->right);
                }
            }
            re.push_back(*rowMax);
        }
        return re;
    }
};
// @lc code=end

