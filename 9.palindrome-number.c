/*
 * @lc app=leetcode id=9 lang=c
 *
 * [9] Palindrome Number
 */

// @lc code=start

bool isPalindrome(int x){
    char y[32];
    int i;

    if (x<0) {
        return false;
    }
    sprintf(y,"%d",x);
    for (i=0;i<strlen(y)/2;i++) {
        if (y[i]!=y[strlen(y)-1-i]) {
            return false;
        }
    }
    return true;
}
// @lc code=end

