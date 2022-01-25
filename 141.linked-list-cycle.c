/*
 * @lc app=leetcode id=141 lang=c
 *
 * [141] Linked List Cycle
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode *p1,*p2;

    if (head==NULL) {
        return false;
    }
    if (head->next==NULL) {
        return false;
    }

    p1=head;
    p2=head;

    while(p1!=NULL&&p2!=NULL) {
        p1=p1->next;
        if (p1==NULL) {
            return false;
        }
        p2=p2->next;
        if (p2==NULL) {
            return false;
        }
        p2=p2->next;
        if (p2==NULL) {
            return false;
        }
        
        if (p1==p2) {
            return true;
        }
    }

    return false;
}
// @lc code=end

