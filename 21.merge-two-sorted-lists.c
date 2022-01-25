/*
 * @lc app=leetcode id=21 lang=c
 *
 * [21] Merge Two Sorted Lists
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    struct ListNode *a,*b,*tmp;
    struct ListNode *re;

    if (list1==NULL) {
        return list2;
    }
    if (list2==NULL) {
        return list1;
    }

    if (list1->val < list2->val) {
        a=list1; b=list2;
    } else {
        a=list2; b=list1;
    }
    re=a;

    while(a!=NULL && b!=NULL) {
        if (a->val <= b->val && a->next == NULL) {
            a->next = b;
            return re;
        }
        if (a->val <= b->val && a->next->val >= b->val) {
            tmp = b->next;
            b->next = a->next;
            a->next = b;
            b = tmp;
        }
        a = a->next;
    }

    return re;
}
// @lc code=end

