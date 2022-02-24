/*
 * @lc app=leetcode id=148 lang=cpp
 *
 * [148] Sort List
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
    ListNode* merge(ListNode* a, ListNode* b) {
        ListNode dummy;
        ListNode *curr=&dummy;
        while(a!=NULL&&b!=NULL) {
            //cout << "Merge: " << a->val << " " << b->val << endl;
            if (a->val < b->val) {
                curr->next=a;
                a=a->next;
            } else {
                curr->next=b;
                b=b->next;
            }
            curr=curr->next;
        }
        if (a!=NULL) {
            curr->next=a;
        }
        if (b!=NULL) {
            curr->next=b;
        }
        return dummy.next;
    }
    ListNode* sortList(ListNode* head) {
        if (head==NULL||head->next==NULL) {
            return head;
        }
        ListNode *slow=head,*fast=head->next;
        while(fast!=NULL&&fast->next!=NULL) {
            slow=slow->next;
            fast=fast->next->next;
        }
        fast=slow->next;
        slow->next=NULL;
        return merge(sortList(head), sortList(fast));
    }
};
// @lc code=end

