/*
 * @lc app=leetcode id=409 lang=cpp
 *
 * [409] Longest Palindrome
 */

// @lc code=start
class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int> m;
        int i;
        for (i=0;i<s.length();i++) {
            if (m.find(s[i])==m.end()) {
                m[s[i]]=1;
            } else {
                m[s[i]]++;
            }
        }
        int x=0;
        bool flag=false;
        for (auto p=m.begin();p!=m.end();p++) {
            if (p->second%2==0) {
                x=x+p->second;
            } else {
                if (!flag) {x++;flag=true;}
                x=x+p->second-1;
            }
        }
        return x;
    }
};
// @lc code=end

