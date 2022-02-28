/*
 * @lc app=leetcode id=521 lang=cpp
 *
 * [521] Longest Uncommon Subsequence I
 */

// @lc code=start
class Solution {
public:
    int findLUSlength(string a, string b) {
        if (a.length()==b.length()) {
            if (a==b) return -1; else a.length();
        }
        return max(a.length(),b.length());
    }
};
// @lc code=end

