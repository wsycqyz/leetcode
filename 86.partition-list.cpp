/*
 * @lc app=leetcode id=86 lang=cpp
 *
 * [86] Partition List
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
    ListNode* partition(ListNode* head, int x) {
        ListNode part1, part2;
        ListNode *p1_ptr = &part1;
        ListNode *p2_ptr = &part2;
        ListNode *cur = head;
        while(cur != NULL) {
            if (cur->val < x) {
                p1_ptr->next = cur;
                cur = cur->next;
                p1_ptr = p1_ptr->next;
                p1_ptr->next = NULL;
            } else {
                p2_ptr->next = cur;
                cur = cur->next;
                p2_ptr = p2_ptr->next;
                p2_ptr->next = NULL;
            }
        }
        p1_ptr->next = part2.next;
        return part1.next;
    }
};
// @lc code=end

