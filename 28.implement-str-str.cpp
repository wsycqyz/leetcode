/*
 * @lc app=leetcode id=28 lang=cpp
 *
 * [28] Implement strStr()
 */

// @lc code=start
class Solution {
public:
    int strStr(string _haystack, string _needle) {
        int i=0,j=0;
        const char* needle = _needle.c_str();
        const char* haystack = _haystack.c_str();

        if (needle==NULL||strlen(needle)==0) {
            return 0;
        }

        for (i=0;i<strlen(haystack);i++) {
            if (strlen(haystack)-i<strlen(needle)) {
                return -1;
            }
            for (j=0;j<strlen(needle);j++) {
                if (haystack[i+j]!=needle[j]) {
                    break;
                }
            }
            if (j==strlen(needle)) {
                return i;
            }
        }

        return -1;
    }
};
// @lc code=end

