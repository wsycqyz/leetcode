/*
 * @lc app=leetcode id=264 lang=cpp
 *
 * [264] Ugly Number II
 */

// @lc code=start
class Solution {
public:
    int nthUglyNumber(int n) {
        int i,a,b,c;
        if (n<=0) return 0;
        if (n==1) return 1;
        vector<int> re(n);
        re[0]=1;
        a=0;b=0;c=0;
        for (i=1;i<n;i++) {
            re[i]=min(re[a]*2,min(re[b]*3,re[c]*5));
            //cout << re[i] << endl;
            if (re[i]==re[a]*2) a++;
            if (re[i]==re[b]*3) b++;
            if (re[i]==re[c]*5) c++;
        }
        return re[n-1];
    }
};
// @lc code=end

