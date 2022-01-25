/*
 * @lc app=leetcode id=14 lang=c
 *
 * [14] Longest Common Prefix
 */

// @lc code=start


char * longestCommonPrefix(char ** strs, int strsSize){
    int i=0,j=0,len=999;

    for (i=0;i<strsSize;i++) {
        if (len>strlen(strs[i])) {
            len=strlen(strs[i]);
        }
    }
    i=0;
    while(len-i>0) {
        for (j=1;j<strsSize;j++) {
            if (strs[0][i]!=strs[j][i]) {
                if (i==0) {
                    return "";
                } else {
                    strs[0][i]='\0';
                    return strs[0];
                }
                break;
            }
        }
        i++;
    }

    if (i<strlen(strs[0])) {
        strs[0][i]='\0';
    }
    return strs[0];
}
// @lc code=end

