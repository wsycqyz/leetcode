/*
 * @lc app=leetcode id=204 lang=cpp
 *
 * [204] Count Primes
 */

埃拉托斯特尼筛法
https://zh.wikipedia.org/wiki/%E5%9F%83%E6%8B%89%E6%89%98%E6%96%AF%E7%89%B9%E5%B0%BC%E7%AD%9B%E6%B3%95

// @lc code=start
class Solution {
public:
    int countPrimes(int n) {
        int i,j;
        if (n==0) return 0;
        vector<bool> flag(n, true);
        flag[0]=false;
        flag[1]=false;
        for (i=2;i<=sqrt(n);) {
            for (j=i*i;j<n;j+=i) {
                flag[j]=false;
            }
            i++;
            while(flag[i]==false) i++; 
        }
        return count(flag.begin(),flag.end(),true);
    }
};
// @lc code=end

