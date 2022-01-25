/*
 * @lc app=leetcode id=168 lang=c
 *
 * [168] Excel Sheet Column Title
 */

// @lc code=start


char * convertToTitle(int columnNumber){
    char *re;
    int re_i=998;
    int i,j;

    re=malloc(sizeof(char)*1000);
    memset(re,0,sizeof(char)*1000);

    while(columnNumber>0) {
        i=columnNumber/26;
        j=columnNumber%26;
        if (j==0) {
            i--;
            j=26;
        }
        columnNumber=i;
        printf("%d,%d,%d\n",re_i,i,j);
        re[re_i--]='A'-1+j;
    }

    return re+re_i+1;
}
// @lc code=end

