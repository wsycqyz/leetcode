/*
 * @lc app=leetcode id=160 lang=cpp
 *
 * [160] Intersection of Two Linked Lists
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *a=headA, *b=headB;
        bool aa=false, bb=false;

        while(a!=NULL&&b!=NULL) {
            if (a==b) {
                return a;
            }
            a=a->next;
            if (!a&&!aa) {
                a=headB;
                aa=true;
            }
            b=b->next;
            if (!b&&!bb) {
                b=headA;
                bb=true;
            }
        }

        return NULL;
    }
};
// @lc code=end

