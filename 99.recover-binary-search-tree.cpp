/*
 * @lc app=leetcode id=99 lang=cpp
 *
 * [99] Recover Binary Search Tree
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
    void find_max_min(TreeNode* root, int flag, TreeNode** re) {
        if (!root) return;
        if (!(*re)) {
            *re=root;
        } else {
            if (flag==0) {
                if ((*re)->val<root->val) {
                    *re=root;
                }
            } else {
                if ((*re)->val>root->val) {
                    *re=root;
                }
            }
        }
        find_max_min(root->left,flag,re);
        find_max_min(root->right,flag,re);
    }
    void recoverTree(TreeNode* root) {
        if (!root) return;
        TreeNode *left_max=NULL,*right_min=NULL;
        find_max_min(root->left,0,&left_max);
        find_max_min(root->right,1,&right_min);
        if (left_max&&right_min&&left_max->val>right_min->val) {
            swap(left_max->val,right_min->val);
            return;
        }
        if (left_max&&left_max->val>root->val) {
            swap(left_max->val, root->val);
            return;
        }
        if (right_min&&right_min->val<root->val) {
            swap(right_min->val, root->val);
            return;
        }
        recoverTree(root->left);
        recoverTree(root->right);
    }
};
// @lc code=end

