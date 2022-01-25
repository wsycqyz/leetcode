/*
 * @lc app=leetcode id=160 lang=c
 *
 * [160] Intersection of Two Linked Lists
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode *p1,*p2;

    p1=headA;
    p2=headB;

    while(p1!=p2) {
        p1=p1->next;
        p2=p2->next;
        if (p1==p2&&p1==NULL) {
            return NULL;
        }
        if (p1==NULL) {
            p1=headB;
        }
        if (p2==NULL) {
            p2=headA;
        }
    }
    return p1;
}
// @lc code=end

