/*
 * @lc app=leetcode id=392 lang=cpp
 *
 * [392] Is Subsequence
 */

// @lc code=start
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0,j;
        for (j=0;j<t.length();j++) {
            if (s[i]==t[j]) {
                i++;
            }
        }
        if (i!=s.length()) {
            return false;
        }
        return true;
    }
};
// @lc code=end

