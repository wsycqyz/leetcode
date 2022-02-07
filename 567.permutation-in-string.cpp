/*
 * @lc app=leetcode id=567 lang=cpp
 *
 * [567] Permutation in String
 */

// @lc code=start
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.length()>s2.length()) {
            return false;
        }

        int m=0,n=0,i=0,s=0;
        string s1_orig=s1;
        while(n<=s2.length()-s1.length()) {
            s=n;
            i=s1.find(s2[s]);
            while (i<s1.length()) {
                s1[i]='*';
                s++;
                m++;
                if (m==s1.length()) {
                    return true;
                }
                i=s1.find(s2[s]);
            }
            m=0;
            n++;
            s1=s1_orig;
        }

        return false;
    }
};
// @lc code=end

