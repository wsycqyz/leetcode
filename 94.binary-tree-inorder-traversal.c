/*
 * @lc app=leetcode id=94 lang=c
 *
 * [94] Binary Tree Inorder Traversal
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


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int i=0;
void solve(int* re, struct TreeNode* root, int* returnSize) {
    if (root==NULL) {
        *returnSize=0;
        return NULL;
    }
    solve(re, root->left, returnSize);
    re[i++]=root->val;
    solve(re, root->right, returnSize);

    *returnSize=i;
    return re;
}

int* inorderTraversal(struct TreeNode* root, int* returnSize){
    int *re;
    i=0;
    re = malloc(sizeof(int)*101);
    solve(re, root, returnSize);
    return re;
}
// @lc code=end

