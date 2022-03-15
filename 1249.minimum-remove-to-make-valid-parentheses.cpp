/*
 * @lc app=leetcode id=1249 lang=cpp
 *
 * [1249] Minimum Remove to Make Valid Parentheses
 */

// @lc code=start
class Solution {
public:
    string minRemoveToMakeValid(string s) {
        vector<char> sta;
        int i;
        for (i=0;i<s.length();i++) {
            if (s[i]=='(') {
                sta.push_back(s[i]);
            }
            if (s[i]==')') {
                if (sta.size()!=0&&sta.back()=='(') {
                    sta.pop_back();
                } else {
                    s[i]=' ';
                }
            }
        }
        while(sta.size()!=0) {
            sta.pop_back();
            i = s.rfind('(');
            s[i]=' ';
        }
        s.erase(remove(s.begin(), s.end(), ' '), s.end());
        return s;
    }
};
// @lc code=end

