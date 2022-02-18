/*
 * @lc app=leetcode id=118 lang=cpp
 *
 * [118] Pascal's Triangle
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<int> row;
        vector<vector<int>> re;
        int i,j;
        for (i=1;i<=numRows;i++) {
            for (j=i-1;j>=0;j--) {
                if (j==i-1) {
                    row.push_back(1);
                    continue;
                }
                if (j==0) {
                    row[0]=1;
                    continue;
                }
                row[j]+=row[j-1];
            }
            re.push_back(row);
        }
        return re;
    }
};
// @lc code=end

