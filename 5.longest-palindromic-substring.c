/*
 * @lc app=leetcode id=5 lang=c
 *
 * [5] Longest Palindromic Substring
 */

// @lc code=start

void pstr(char *s, int i, int j, char *re) {
    while(i>=0&&j<=strlen(s)-1) {
        if (s[i]!=s[j]) {
            break;
        }
        i--;
        j++;
    }
    if (j-i-1>strlen(re)) {
        strncpy(re,s+i+1,j-i-1);
    }
}

char * longestPalindrome(char * s){
    int i,j;
    char *re;

    re=malloc(sizeof(char)*(strlen(s)+1));
    memset(re,0,strlen(s)+1);

    if (strlen(s)==1) {
        return s;
    }

    i=0;
    while(i<strlen(s)-1) {
        pstr(s,i,i,re);
        pstr(s,i,i+1,re);
        i++;
    }
    return re;
}
// @lc code=end

