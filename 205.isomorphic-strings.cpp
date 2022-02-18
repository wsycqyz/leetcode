/*
 * @lc app=leetcode id=205 lang=cpp
 *
 * [205] Isomorphic Strings
 */

// @lc code=start
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,int> m,n;
        int i,k;
        for (i=0;i<s.length();i++) {
            k=s[i]-t[i];
            if (m.find(s[i])==m.end()) {
                m[s[i]]=k;
            } else {
                if (k!=m[s[i]]) {
                    return false;
                }
            }
            if (n.find(t[i])==n.end()) {
                n[t[i]]=k;
            } else {
                if (k!=n[t[i]]) {
                    return false;
                }
            }
        }
        return true;
    }
};
// @lc code=end

