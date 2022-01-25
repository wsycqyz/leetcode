/*
 * @lc app=leetcode id=20 lang=c
 *
 * [20] Valid Parentheses
 */

// @lc code=start


bool isValid(char * s){
    int i=0,j=-1;
    char *t=malloc(strlen(s)+1);

    memset(t,0,strlen(s)+1);

    for (i=0;i<strlen(s);i++) {
        switch(s[i])
        {
            case '(':
            case '[':
            case '{':
                j++;
                t[j]=s[i];
                break;
            case ')':
                if (j<0 || t[j]!='(') {
                    return false;
                } else {
                    j--;
                }
                break;
            case ']':
                if (j<0 || t[j]!='[') {
                    return false;
                } else {
                    j--;
                }
                break;
            case '}':
                if (j<0 || t[j]!='{') {
                    return false;
                } else {
                    j--;
                }
                break;
            default:
                break;
        }
    }

    if (j==-1) {
        return true;
    } else {
        return false;
    }
}
// @lc code=end

