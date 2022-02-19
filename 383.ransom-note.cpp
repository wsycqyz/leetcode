/*
 * @lc app=leetcode id=383 lang=cpp
 *
 * [383] Ransom Note
 */

// @lc code=start
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int i,k;
        for (i=0;i<ransomNote.length();i++) {
            k=magazine.find(ransomNote[i]);
            if (k==string::npos) {
                return false;
            }
            magazine[k]='*';
        }
        return true;
    }
};
// @lc code=end

