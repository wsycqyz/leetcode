/*
 * @lc app=leetcode id=206 lang=cpp
 *
 * [206] Reverse Linked List
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
    ListNode* reverseList(ListNode* head) {
        ListNode *a=NULL,*b=NULL;

        if (head==NULL || head->next==NULL) {
            return head;
        }
        a=head; b=a->next; head=b; a->next=NULL;
        while(head) {
            head=b->next;
            b->next=a;
            a=b;
            b=head;
        }

        return a;        
    }
};
// @lc code=end

