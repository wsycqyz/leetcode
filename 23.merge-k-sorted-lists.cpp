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
    void merge(ListNode* a, ListNode *b) {
        ListNode* pre=NULL,*tmp;
        while (a&&b) {
            if (a->val<=b->val) {
                pre=a;
                a=a->next;
            } else {
                if (pre) {
                    tmp=b->next;
                    pre->next=b;
                    b->next=a;
                    pre=b;
                    b=tmp;
                } else {
                    swap(a->val, b->val);
                    tmp=b->next;
                    b->next=a->next;
                    a->next=b;
                    pre=a;
                    a=b;
                    b=tmp;
                }
            }
        }
        if (!a&&b) {
            if (pre) {
                pre->next=b;
            }
        }
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* re;
        if (lists.size()==0) {
            return NULL;
        }
        int i=0,j=0;
        while(i<lists.size() && lists[i]==NULL) { 
            i++;
        }
        if (i==lists.size()) {
            return NULL;
        }
        cout << i << endl;
        for (j=i+1;j<lists.size();j++) {
            merge(lists[i], lists[j]);
        }
        return lists[i];
    }
};
// @lc code=end

