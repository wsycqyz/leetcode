/*
 * @lc app=leetcode id=204 lang=cpp
 *
 * [204] Count Primes
 */

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

