/*
 * @lc app=leetcode id=92 lang=cpp
 *
 * [92] Reverse Linked List II
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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode *a,*b,*pre_a,*b_next,*c,*tmp;
        int i=1;
        if (left==right) {
            return head;
        }
        a=head;
        pre_a=NULL;
        while(i<left){
            i++;
            pre_a=a;
            a=a->next;
        }
        b=a;
        while(i<right) {
            i++;
            b=b->next;
        }
        cout << a->val << " " << b->val << endl;
        b_next=b->next; b->next=NULL;
        if (pre_a) {
            pre_a->next=b;
        }
        c=a->next; a->next=b_next;
        while (c) {
            tmp=c->next;
            c->next=a;
            a=c;
            c=tmp;
        }
        if (left==1) {
            return b;
        }
        return head;
    }
};
// @lc code=end

