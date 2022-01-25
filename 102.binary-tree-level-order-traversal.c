/*
 * @lc app=leetcode id=102 lang=c
 *
 * [102] Binary Tree Level Order Traversal
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
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** levelOrder(struct TreeNode* root, int* returnSize, int** returnColumnSizes){
    int **re,i,j,k;
    struct TreeNode* q[2001]={NULL};
    re=malloc(sizeof(int*)*2001);
    *returnSize=0;
    *returnColumnSizes=malloc(sizeof(int)*2001);
    memset(*returnColumnSizes, 0, sizeof(int)*2001);

    if (root==NULL) {
        return NULL;
    }

    re[0]=malloc(sizeof(int)*1);
    re[0][0]=root->val;
    (*returnColumnSizes)[0]=1;
    (*returnSize)++;
    q[0]=root;i=0;j=2;
    
    while (i<j-1) {
        if (q[i]==NULL) {
            re[*returnSize]=malloc(sizeof(int)*2*(j-i-1));
            k=i+1;
            while(q[k]!=NULL) {
                re[*returnSize][(*returnColumnSizes)[*returnSize]]=q[k]->val;
                (*returnColumnSizes)[*returnSize]++;
                k++;
            }
            (*returnSize)++;
            j++;
            i++;            
            continue;
        }

        if (q[i]->left) {
            q[j]=q[i]->left;
            j++;
        }
        if (q[i]->right) {
            q[j]=q[i]->right;
            j++;
        }
        i++;
    }

    return re;
}
// @lc code=end

