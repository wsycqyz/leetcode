/*
 * @lc app=leetcode id=147 lang=cpp
 *
 * [147] Insertion Sort List
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
    ListNode* insertionSortList(ListNode* head) {
        ListNode dummy(0, head);
        if (!head||!head->next) return head;
        ListNode *pre = head, *cur = head->next;
        ListNode *tmp;

        while(cur) {
            if (cur->val >= pre->val) {
                pre = cur;
                cur = cur->next;
                continue;
            }
            tmp = &dummy;
            while(tmp->next && cur->val > tmp->next->val) {
                tmp = tmp->next;
            }
            pre->next = cur->next;
            cur->next = tmp->next;
            tmp->next = cur; 
            cur = pre->next;
        }

        return dummy.next;
    }
};
// @lc code=end

