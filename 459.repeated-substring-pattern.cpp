/*
 * @lc app=leetcode id=459 lang=cpp
 *
 * [459] Repeated Substring Pattern
 */

// @lc code=start
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int len=s.length();
        int i,j,k,t;
        string sub;
        for (i=1;i<=len/2;i++) {
            sub+=s[i-1];
            j=i;k=1;
            while((t=s.find(sub,j))!=string::npos) {
                if (t!=j) break;
                j=t+i;
                k++;
            }
            if (i*k==len) return true;
        }
        return false;
    }
};
// @lc code=end

