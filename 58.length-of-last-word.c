/*
 * @lc app=leetcode id=58 lang=c
 *
 * [58] Length of Last Word
 */

// @lc code=start


int lengthOfLastWord(char * s){
    int i=0,j=0;
    int start=0,end=0;

    if (strlen(s)==1) {
        return 1;
    }

    for (i=0;i<strlen(s)-1;i++) {
        if (s[i]==' '&&s[i+1]!=' ') {
            start=i+1;
        }
        if (s[i]!=' '&&s[i+1]==' ') {
            end=i;
        }
    }
    if (s[i]!=' ') {
        end=i;
    }

    return end-start+1;
}
// @lc code=end

