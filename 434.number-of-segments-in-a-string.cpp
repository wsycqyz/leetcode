/*
 * @lc app=leetcode id=434 lang=cpp
 *
 * [434] Number of Segments in a String
 */

// @lc code=start
class Solution {
public:
    int countSegments(string s) {
        int i=0,re=0;
        int n=s.length();
        if (n==0) return 0;
        while(i<n&&s[i]==' ') i++;
        if (i==n) return 0;
        while(i<n) {
            if (s[i]==' ') {
                while(i<n&&s[i]==' ') i++;
                re++;
            } else {
                i++;
            }
        }
        if (s[s.length()-1]==' ') {
            return re;
        }
        return re+1;
    }
};
// @lc code=end

