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
    bool preorder(TreeNode* root, TreeNode* t) {
        if (root==NULL) {
            return false;
        }
        if (root==t) {
            return true;
        }
        if (root->left) {
            if (preorder(root->left, t)) {
                return true;
            }
        }
        if (root->right) {
            if (preorder(root->right, t)) {
                return true;
            }
        }
        return false;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {  
        TreeNode *tmp;
        if (root==NULL) {
            return NULL;
        }
        if (p==root) {
            if (preorder(root->left, q) || preorder(root->right, q)) {
                return root;
            }
        }
        if (q==root) {
            if (preorder(root->left, p) || preorder(root->right, p)) {
                return root;
            }
        }

        if (preorder(root->left, p)&&preorder(root->right, q)) {
            return root;
        }
        if (preorder(root->left, q)&&preorder(root->right, p)) {
            return root;
        }
        tmp=NULL;
        tmp=lowestCommonAncestor(root->left, p, q);
        if (tmp) return tmp;
        tmp=NULL;
        tmp=lowestCommonAncestor(root->right, p, q);
        if (tmp) return tmp;
        return NULL;
    }
    void printvector(vector<int>& n) {
        for (int i=0;i<n.size();i++) {
            cout<<n[i]<<" ";
        }
        cout<<endl;
    }
};
// @lc code=end

