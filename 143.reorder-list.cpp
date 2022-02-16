/*
 * @lc app=leetcode id=143 lang=cpp
 *
 * [143] Reorder List
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
    void reorderList(ListNode* head) {
        vector<ListNode*> s;
        ListNode *a=head,*b;
        int n=0,i=0;
        if (!head||head->next==NULL||head->next->next==NULL) return;
        while(a) {
            n++;
            s.push_back(a);
            a=a->next;
        }
        a=head;
        for (i=0;i<n/2;i++) {
            b=s.back();
            s.pop_back();
            b->next=a->next;
            a->next=b;
            a=a->next->next;
        }
        if (!a) {
            b->next=NULL;
        } else {
            a->next=NULL;
        }
        return;
    }
};
// @lc code=end

