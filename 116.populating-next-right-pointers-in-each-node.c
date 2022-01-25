/*
 * @lc app=leetcode id=116 lang=c
 *
 * [116] Populating Next Right Pointers in Each Node
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
	if (root==NULL) {
        return NULL;
    }

    if (root->left) {
        root->left->next=root->right;
    }
    if (root->next&&root->right) {
        root->right->next=root->next->left;
    }
    connect(root->left);
    connect(root->right);
    return root;
}
// @lc code=end

