/*
 * @lc app=leetcode id=23 lang=cpp
 *
 * [23] Merge k Sorted Lists
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
    ListNode* merge(ListNode* a, ListNode *b) {
        ListNode dummy;
        ListNode *curr=&dummy;
        while(a&&b) {
            if (a->val<b->val) {
                curr->next=a;
                a=a->next;
            } else {
                curr->next=b;
                b=b->next;
            }
            curr=curr->next;
        }
        if (a) {
            curr->next=a;
        } else {
            curr->next=b;
        }
        return dummy.next;
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n=lists.size();
        int i;
        int interval=1;
        if (n==0) return NULL;
        while(interval<n) {
            for(i=0;i<n-interval;i=i+interval*2) {
                lists[i]=merge(lists[i],lists[i+interval]);
            }
            interval*=2;
        }
        return lists[0];
    }
};
// @lc code=end

