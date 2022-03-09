/*
 * @lc app=leetcode id=82 lang=cpp
 *
 * [82] Remove Duplicates from Sorted List II
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
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head||!head->next) return head;
        ListNode dummy(INT_MAX);
        dummy.next = head;
        ListNode *pre = &dummy;
        ListNode *cur = head;
        bool flag;

        while(cur&&cur->next) {
            int val = cur->val;
            flag = false;
            while(cur->next&&val==cur->next->val) {
                flag = true;
                ListNode *tmp;
                tmp=cur->next;
                cur->next = cur->next->next;
                //delete tmp;                
            }
            if (flag) {
                ListNode *tmp;
                tmp=cur;
                pre->next = cur->next;
                cur=pre->next;
                //delete tmp;
            } else {
                pre = cur;
                cur = cur->next;
            }
        }

        return dummy.next;
    }
};
// @lc code=end

