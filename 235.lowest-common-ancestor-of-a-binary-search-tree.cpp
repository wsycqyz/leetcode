/*
 * @lc app=leetcode id=235 lang=cpp
 *
 * [235] Lowest Common Ancestor of a Binary Search Tree
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {  
        TreeNode* tmp;
        if (p==NULL||q==NULL||root==NULL) {
            return NULL;
        }
        if (p->val>q->val) {
            tmp=p;
            p=q;
            q=tmp;
        }

        if (root->val>=p->val&&root->val<=q->val) {
            return root;
        }
        tmp=NULL;
        if (root->val<p->val) {
            tmp=lowestCommonAncestor(root->right, p, q);
        }
        if (tmp!=NULL) {
            return tmp;
        }
        tmp=NULL;
        if (root->val>q->val) {
            tmp=lowestCommonAncestor(root->left, p, q);
        }
        return tmp;
    }
};
// @lc code=end

