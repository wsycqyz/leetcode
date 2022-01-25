/*
 * @lc app=leetcode id=114 lang=c
 *
 * [114] Flatten Binary Tree to Linked List
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


void flatten(struct TreeNode* root){
    struct TreeNode *a,*b,*c;
    a=root;

    while(a) {
        printf("%d\n",a->val);
        b=a->left;
        c=b;
        while(b&&b->right) {
            b=b->right;
        }
        if (b) b->right=a->right;
        a->left=NULL;
        if (c) a->right=c;
        a=a->right;
    }
}
// @lc code=end

