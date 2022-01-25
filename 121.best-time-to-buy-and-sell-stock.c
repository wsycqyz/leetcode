/*
 * @lc app=leetcode id=121 lang=c
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start


int maxProfit(int* prices, int pricesSize){
    int i,j;
    int max=0;
    int *d;
    d=malloc(sizeof(int)*pricesSize);
    d[0]=prices[0];

    for (i=1;i<pricesSize;i++) {
        if (prices[i]<d[i-1]) {
            d[i]=prices[i];
        } else {
            d[i]=d[i-1];
        }
        if (prices[i]-d[i-1]>max) {
            max=prices[i]-d[i-1];
        }
    }
    return max;
}
// @lc code=end

