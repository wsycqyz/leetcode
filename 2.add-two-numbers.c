/*
 * @lc app=leetcode id=2 lang=c
 *
 * [2] Add Two Numbers
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    int a=0,b=0,c=0;
    struct ListNode *re, *head, *tmp, *pre;
    
    tmp=l1;
    while(tmp!=NULL) {
        a++;
        tmp=tmp->next;
    }
    tmp=l2;
    while(tmp!=NULL) {
        b++;
        tmp=tmp->next;
    }
    if (a<b) {
        tmp=l1;
        l1=l2;
        l2=tmp;
    }
    head=l1;
    a=0;
    b=0;
    c=0;
    while(l1!=NULL) {
        if (l2!=NULL) {
            a=l2->val;
            l2=l2->next;
        } else {
            a=0;
        }
        b=(l1->val+a+c)%10;
        c=(l1->val+a+c)/10;
        l1->val=b;
        pre=l1;
        l1=l1->next;
    }
    if (c==1) {
        tmp=malloc(sizeof(struct ListNode));
        tmp->val=1;
        pre->next=tmp;
        tmp->next=NULL;
    }
    return head;
}
// @lc code=end

