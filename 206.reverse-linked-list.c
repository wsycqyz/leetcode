/*
 * @lc app=leetcode id=206 lang=c
 *
 * [206] Reverse Linked List
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head){
    struct ListNode *p1,*p2,*p3;

    if (head==NULL) {
        return NULL;
    }

    if (head->next==NULL) {
        return head;
    }

    p1=head;p2=head->next;p3=p2->next;
    p1->next=NULL;

    while(p3!=NULL) {
        p2->next=p1;
        p1=p2;
        p2=p3;
        p3=p3->next;
    }
    p2->next=p1;
    return p2;
}
// @lc code=end

