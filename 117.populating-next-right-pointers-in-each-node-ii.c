/*
 * @lc app=leetcode id=117 lang=c
 *
 * [117] Populating Next Right Pointers in Each Node II
 */

// @lc code=start
/**
 * Definition for a Node.
 * struct Node {
 *     int val;
 *     struct Node *left;
 *     struct Node *right;
 *     struct Node *next;
 * };
 */

struct Node* connect(struct Node* root) {
    struct Node *tmp;

	if (root==NULL) {
        return NULL;
    }
    printf("%d\n", root->val);
    if (root->left) {
        printf("go to left\n");
        if (root->right) {
            printf("%d->%d\n", root->left->val, root->right->val);
            root->left->next=root->right;
        } else {
            tmp=root->next;
            while(tmp) {
                if (tmp->left) {
                    printf("%d->%d\n", root->left->val, tmp->left->val);
                    root->left->next=tmp->left;
                    break;
                }
                if (tmp->right) {
                    printf("%d->%d\n", root->left->val, tmp->right->val);
                    root->left->next=tmp->right;
                    break;
                }
                tmp=tmp->next;
            }
        }
    }
    
    if (root->right) {
        printf("go to right\n");
        tmp=root->next;
        while(tmp) {
            printf("tmp=%d\n", tmp->val);
            if (tmp->left) {
                printf("%d->%d\n", root->right->val, tmp->left->val);
                root->right->next=tmp->left;
                break;
            }
            if (tmp->right) {
                printf("%d->%d\n", root->right->val, tmp->right->val);
                root->right->next=tmp->right;
                break;
            }
            tmp=tmp->next;
        }
    }
    connect(root->right);
    connect(root->left);
    
    return root;
}
// @lc code=end

