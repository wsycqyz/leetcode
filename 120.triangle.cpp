/*
 * @lc app=leetcode id=120 lang=cpp
 *
 * [120] Triangle
 */

// @lc code=start
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        if (n==0) return 0;
        if (n==1) return triangle[0][0];
        int i,j;
        vector<int> s;
        s.push_back(triangle[0][0]);
        for (i=1;i<n;i++) {
            for (j=i;j>=0;j--) {
                if (j==i) {
                    s.push_back(triangle[i][j]+s[j-1]);
                } else if (j==0) {
                    s[0]=triangle[i][j]+s[0];
                } else {
                    s[j]=min(triangle[i][j]+s[j], triangle[i][j]+s[j-1]);
                }
            }
        }
        return *min_element(s.begin(), s.end());
    }
};
// @lc code=end

