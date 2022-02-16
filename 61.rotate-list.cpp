/*
 * @lc app=leetcode id=61 lang=cpp
 *
 * [61] Rotate List
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
    ListNode* rotateRight(ListNode* head, int k) {
        int i=0,n=0;
        ListNode *a=head,*b,*end;
        if (!head || k==0) return head;
        while(a) {
            n++;
            if (!a->next) { end=a; }
            a=a->next;
        }
        k=k%n;
        if (k==0) return head;
        k=n-k;
        a=head;
        for (i=0;i<k-1;i++) {
            a=a->next;
        }
        b=a->next;
        end->next=head;
        head=b;
        a->next=NULL;
        return head;
    }
};
// @lc code=end

