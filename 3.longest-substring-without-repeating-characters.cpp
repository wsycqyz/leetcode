/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> visited;
        int re=0;
        int i,j;
        if (s=="") {
            return 0;
        }
        if (s.length()==1) {
            return 1;
        }
        for (i=0;i<s.length()-1;i++) {
            visited.clear();
            visited[s[i]]=1;
            for (j=i+1;j<s.length();j++) {
                if (visited.find(s[j])!=visited.end()) {
                    re=max(re, j-i);
                    break;
                }
                visited[s[j]]=1;
            }
            if (j==s.length()) {
                re=max(re,j-i);
            }
        }
        return re;
    }
};
// @lc code=end

