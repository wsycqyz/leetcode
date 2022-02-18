/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 */

// @lc code=start
class Solution {
public:
    bool isAnagram(string s, string t) {
        int re[26]={0};
        int i;
        for (i=0;i<s.length();i++) {
            re[s[i]-'a']++;
        }
        for (i=0;i<t.length();i++) {
            re[t[i]-'a']--;
        }
        for (i=0;i<26;i++) {
            if (re[i]!=0) {
                return false;
            }
        }
        return true;
    }
};
// @lc code=end

