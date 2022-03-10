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
        ListNode *slow, *fast;
        ListNode dummy(0, head);
        slow = &dummy;
        fast = &dummy;
        int i = 0;
        while(fast && i<n-1) {
            fast = fast->next;
            i++;
        }
        ListNode *pre = &dummy;
        while(fast->next) {
            pre = slow;
            slow = slow->next;
            fast = fast->next;
        }
        pre->next = slow->next;
        return dummy.next;
    }
};
// @lc code=end

