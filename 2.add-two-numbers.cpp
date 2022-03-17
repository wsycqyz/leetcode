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
        int val,carry, val1, val2;
        ListNode dummy;
        ListNode *cur=&dummy, *tmp;
        carry = 0;
        while(l1 || l2 || carry) {
            if (l1!=NULL) val1 = l1->val; else val1=0;
            if (l2!=NULL) val2 = l2->val; else val2=0;
            val = val1+val2+carry;
            carry = val/10;
            val=val%10;
            tmp = new ListNode(val);
            cur->next = tmp;
            cur = tmp;
            if (l1!=NULL) l1=l1->next;
            if (l2!=NULL) l2=l2->next;
        }
        
        return dummy.next;
    }
};
// @lc code=end

