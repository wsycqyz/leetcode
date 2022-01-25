/*
 * @lc app=leetcode id=138 lang=c
 *
 * [138] Copy List with Random Pointer
 */

// @lc code=start
/**
 * Definition for a Node.
 * struct Node {
 *     int val;
 *     struct Node *next;
 *     struct Node *random;
 * };
 */

struct Node* copyRandomList(struct Node* head) {
	struct Node *re, *i, *next, *tmp;

    i=head;
    while(i!=NULL) {
        tmp=malloc(sizeof(struct Node));
        tmp->val=i->val;tmp->next=NULL;tmp->random=NULL;
        next=i->next;
        i->next=tmp;
        tmp->next=next;
        i=next;
    }

    i=head;
    while(i!=NULL) {
        if (i->random!=NULL) {
            i->next->random = i->random->next;
        }
        i=i->next->next;
    }

    i=head;
    if (head) {re=head->next;}
    while(i!=NULL) {
        tmp=i->next;
        i=tmp->next;
        if (i!=NULL) {
            tmp->next=i->next;
        }
    }

    return re;
}
// @lc code=end

