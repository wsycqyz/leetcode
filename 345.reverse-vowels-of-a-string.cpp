/*
 * @lc app=leetcode id=345 lang=cpp
 *
 * [345] Reverse Vowels of a String
 */

// @lc code=start
class Solution {
public:
    bool test(string& s, int i) {
        if (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U') {
            return true;
        }
        return false;
    }
    string reverseVowels(string s) {
        int i=0,j=s.length()-1;
        while (true) {
            while (i<j&&!test(s,i)) i++;
            if (i>=j) return s;
            while (i<j&&!test(s,j)) j--;
            if (i>=j) return s;
            swap(s[i],s[j]);
            i++;j--;
        }
        return "";
    }
};
// @lc code=end

