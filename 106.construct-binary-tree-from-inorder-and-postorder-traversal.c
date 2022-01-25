/*
 * @lc app=leetcode id=106 lang=c
 *
 * [106] Construct Binary Tree from Inorder and Postorder Traversal
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

struct TreeNode* buildTree(int* inorder, int inorderSize, int* postorder, int postorderSize){

    struct TreeNode* tree(int a, int b, int x, int y) {
        struct TreeNode *tmp;
        int i=0;
        //printf("%d,%d,%d,%d\n",a,b,x,y);
        if (a>b||x>y) {
            return NULL;
        }
        tmp=malloc(sizeof(struct TreeNode));
        tmp->val=postorder[y];
        i=a;
        while(tmp->val!=inorder[i]) {i++;}
        tmp->left=tree(a,i-1,x,x+(i-a)-1);
        tmp->right=tree(i+1,b,x+i-a,y-1);
        return tmp;
    }

    return tree(0,inorderSize-1,0,postorderSize-1);
}
// @lc code=end

