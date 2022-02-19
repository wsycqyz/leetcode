/*
 * @lc app=leetcode id=338 lang=cpp
 *
 * [338] Counting Bits
 */

// @lc code=start
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> re;
        int i,j,k,x;
        re.push_back(0);
        if (n==0) return re;        
        for (i=1;i<=n;i++) {
            k=i;x=0;
            while(k!=0) {
                //cout << k << " ";
                if (k&1) x++;
                k=k>>1;
            }
            //cout << x << endl;
            re.push_back(x);
        }
        return re;
    }
};
// @lc code=end

