/*
 * @lc app=leetcode id=141 lang=cpp
 *
 * [141] Linked List Cycle
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
    bool hasCycle(ListNode *head) {
        ListNode *a,*b;
        if (!head) {
            return false;
        }
        a=head; b=head;
        while (a&&b) {
            a=a->next;
            b=b->next;
            if (b) {
                b=b->next;
                if (b&&a==b) {
                    return true;
                }
            }
        }

        return false;
    }
};
// @lc code=end

