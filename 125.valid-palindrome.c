/*
 * @lc app=leetcode id=125 lang=c
 *
 * [125] Valid Palindrome
 */

// @lc code=start

bool isAlpha(char s) {
    if ((s>='a')&&(s<='z')) return true;
    if ((s>='A')&&(s<='Z')) return true;
    if ((s>='0')&&(s<='9')) return true;
    return false;
}

bool isPalindrome(char * s){
    int low,high;
    low=0;
    high=strlen(s)-1;

    if (strlen(s)==1) {
        return true;
    }

    while(low<high) {
        while (!(isAlpha(s[low]))&&(low<high)) low++;
        while (!(isAlpha(s[high]))&&(low<high)) high--;
        if (low==high) {
            return true;
        }

        printf("%c,%c\n", s[low],s[high]);
        if (s[low]==s[high]) {
            low++;
            high--;
            continue;
        }

        if (s[low]>='A'&&s[low]<='Z'&&s[low]+32==s[high]) {
            low++;
            high--;
            continue;
        }            
        if (s[low]>='a'&&s[low]<='z'&&s[low]-32==s[high]) {
            low++;
            high--;
            continue;
        }
        return false;
    }
    return true;
}
// @lc code=end

