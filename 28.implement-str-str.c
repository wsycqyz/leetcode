/*
 * @lc app=leetcode id=28 lang=c
 *
 * [28] Implement strStr()
 */

// @lc code=start


int strStr(char * haystack, char * needle){
    int i=0,j=0;

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
// @lc code=end

