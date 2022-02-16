/*
 * @lc app=leetcode id=203 lang=cpp
 *
 * [203] Remove Linked List Elements
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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *a=head;
        if (!head) return head;
        while(head&&head->val==val) head=head->next;
        a=head;
        while(a&&a->next) {
            if (a->next->val==val) {
                a->next=a->next->next;
            } else {
                a=a->next;
            }
        }
        return head;
    }
};
// @lc code=end

