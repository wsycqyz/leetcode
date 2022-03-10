/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int x=0,y=0;
        ListNode dummy;
        ListNode *cur=&dummy;
        ListNode *tmp, *l3;
        while(l1&&l2) {
            x = (l1->val + l2->val + y) % 10;
            y = (l1->val + l2->val + y) / 10;
            tmp = new ListNode(x);
            cur->next = tmp;
            tmp->next = NULL;
            cur = tmp;
            l1 = l1->next; l2 = l2->next;
        }
        if (l1) {
            l3 = l1;
        } else {
            l3 = l2;
        }
        while(l3) {
            x = (l3->val + y) % 10;
            y = (l3->val + y) / 10;
            tmp = new ListNode(x);
            cur->next = tmp;
            tmp->next = NULL;
            cur = tmp;
            l3 = l3->next;
        }
        if (y) {
            tmp = new ListNode(y);
            cur->next = tmp;
            tmp->next = NULL;
        }
        return dummy.next;
    }
};
// @lc code=end

