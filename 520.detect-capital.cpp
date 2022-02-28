/*
 * @lc app=leetcode id=520 lang=cpp
 *
 * [520] Detect Capital
 */

// @lc code=start
class Solution {
public:
    bool detectCapitalUse(string word) {
        bool pre=true;
        bool all_up=false;
        for (int i=0;i<word.length();i++) {
            if (i>0&&word[i]>='A'&&word[i]<='Z'&&word[i-1]>='A'&&word[i-1]<='Z') {
                all_up=true;
            }
            if (word[i]>='a'&&word[i]<='z'&&all_up) {
                return false;
            }
            if (word[i]>='A'&&word[i]<='Z'&&!pre) {
                return false;
            }
            if (word[i]>='a'&&word[i]<='z'&&pre) {
                pre=false;
            }
        }
        return true;
    }
};
// @lc code=end

