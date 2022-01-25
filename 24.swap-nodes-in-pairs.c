/*
 * @lc app=leetcode id=24 lang=c
 *
 * [24] Swap Nodes in Pairs
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* swapPairs(struct ListNode* head){
    struct ListNode *a,*b,*c,*nh;

    if (head==NULL) {
        return NULL;
    }
    if (head->next==NULL) {
        return head;
    }

    nh=malloc(sizeof(struct ListNode));
    nh->next=head;

    a=nh;
    b=nh->next;
    c=b->next;

    while(b!=NULL&&c!=NULL) {
        b->next=c->next;
        a->next=c;
        c->next=b;

        a=b;
        if (b->next!=NULL) {
            b=b->next;
        } else {
            break;
        }
        if (b->next!=NULL) {
            c=b->next;
        } else {
            break;
        }
    }

    return nh->next;
}
// @lc code=end

