/*
 * @lc app=leetcode id=387 lang=c
 *
 * [387] First Unique Character in a String
 */

// @lc code=start


int firstUniqChar(char * s){
    int a[26]={0};
    int i,j;
    int len=strlen(s);
    int re=999999;

    for (i=0;i<len;i++) {
        a[s[i]-'a']++;
    }

    for (i=0;i<26;i++) {
        if (a[i]==1) {
            for (j=0;j<len;j++) {
                if (s[j]-'a'==i&&re>j) {
                    re=j;
                }
            }
        }
    }
    if (re==999999) {
        return -1;
    }
    return re;
}
// @lc code=end

