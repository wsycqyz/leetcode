/*
 * @lc app=leetcode id=328 lang=cpp
 *
 * [328] Odd Even Linked List
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
    ListNode* oddEvenList(ListNode* head) {
        ListNode odd_head;
        ListNode even_head;
        ListNode* odd_ptr = &odd_head;
        ListNode* even_ptr = &even_head;
        ListNode* cur = head;
        int i=1;
        while (cur!=NULL) {
            if (i%2==1) {
                odd_ptr->next = cur;
                cur = cur->next;
                odd_ptr=odd_ptr->next;
                odd_ptr->next = NULL;
            } else {
                even_ptr->next = cur;
                cur = cur->next;
                even_ptr=even_ptr->next;
                even_ptr->next = NULL;
            }
            i++;
        }
        odd_ptr->next = even_head.next;
        return odd_head.next;
    }
};
// @lc code=end

