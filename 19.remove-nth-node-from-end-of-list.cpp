/*
 * @lc app=leetcode id=19 lang=cpp
 *
 * [19] Remove Nth Node From End of List
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *a,*b;
        a=head;b=head;
        int i=0;
        
        while(i<n) {
            i++;
            b=b->next;
        }
        while(b&&b->next) {
            a=a->next;
            b=b->next;
        }
        if (!b) {
            if (a==head) return a->next;
        } else {
            a->next=a->next->next;
        }
        return head;
    }
};
// @lc code=end

