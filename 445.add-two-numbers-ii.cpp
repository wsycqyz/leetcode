/*
 * @lc app=leetcode id=445 lang=cpp
 *
 * [445] Add Two Numbers II
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
        int m=0,n=0,x=0;
        ListNode *a=l1,*b=l2,*re=NULL,*tmp=NULL;
        while(a!=NULL) {a=a->next; m++;}
        while(b!=NULL) {b=b->next; n++;}
        if (m>n) {
            a=l1;
            b=l2;
        } else {
            a=l2;
            b=l1;
            swap(m,n);
        }
        //cout << m << " " << n << endl;
        while(m>0&&n>0) {
            if (m>n) {
                tmp=new ListNode(a->val);
                tmp->next=re;
                //cout << " " << tmp->val;
                re=tmp;
                a=a->next;
                m--;
            } else {
                tmp=new ListNode(a->val+b->val);
                tmp->next=re;
                //cout << " " << tmp->val;
                re=tmp;
                a=a->next;
                b=b->next;
                m--;
                n--;
            }
        }
        a=re;
        //while(a!=NULL) { cout << a->val << " "; a=a->next;}
        cout << endl;
        a=NULL;
        while(re!=NULL) {
            re->val+=x;
            x=(re->val)/10;
            re->val=(re->val)%10;
            b=re->next;
            re->next=a;
            a=re;
            re=b;
        }

        if (x) {
            tmp=new ListNode(1);
            tmp->next=a;
            a=tmp;
        }

        return a;
    }
};
// @lc code=end

