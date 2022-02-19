/*
 * @lc app=leetcode id=290 lang=cpp
 *
 * [290] Word Pattern
 */

// @lc code=start
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char, int> p2i;
        map<string, int> w2i;
        istringstream in(s);
        string word;
        int i=0;
        int n=pattern.length();
        for (i=0;in>>word;i++) {
            cout << word << " " << pattern[i] << endl;
            if (i==n||p2i[pattern[i]]!=w2i[word]) {
                return false;
            }
            p2i[pattern[i]]=w2i[word]=i+1;
        }
        return i==n;
    }
};
// @lc code=end

