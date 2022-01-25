/*
 * @lc app=leetcode id=66 lang=c
 *
 * [66] Plus One
 */

// @lc code=start


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize){
    int *re;
    int i=0,a=0;

    re=malloc(sizeof(int)*(digitsSize+1));

    for (i=digitsSize-1;i>=0;i--) {
        if (i==digitsSize-1) {
            re[i+1]=(digits[i]+1)%10;
            a=(digits[i]+1)/10;
        } else {
            re[i+1]=(digits[i]+a)%10;
            a=(digits[i]+a)/10;
        }
    }
    
    if (a==1) {
        re[0]=1;
        *returnSize=digitsSize+1;
        return re;
    }
    *returnSize=digitsSize;
    return re+1;
}
// @lc code=end

