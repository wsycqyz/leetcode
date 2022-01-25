/*
 * @lc app=leetcode id=171 lang=c
 *
 * [171] Excel Sheet Column Number
 */

// @lc code=start


int titleToNumber(char * columnTitle){
    int len=strlen(columnTitle)-1;
    int re=0;

    while(len>=0) {
        re = re + (columnTitle[len]-'A'+1) * pow(26 , strlen(columnTitle)-1-len);
        len--;
    }
    return re;
}
// @lc code=end

