/*
 * @lc app=leetcode id=207 lang=cpp
 *
 * [207] Course Schedule
 */

// @lc code=start
class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> g(numCourses);
        int d[numCourses];
        int i;
        for (i=0;i<numCourses;i++) {
            d[i]=0;
        }
        for (i=0;i<prerequisites.size();i++) {
            g[prerequisites[i][1]].push_back(prerequisites[i][0]);
            d[prerequisites[i][0]]++;
        }
        vector<int> order;
        queue<int> q;
        for (i=0;i<numCourses;i++) {
            if (d[i]==0) {
                q.push(i);
            }
        }
        int a,j;
        while(q.size()!=0) {
            a=q.front();
            q.pop();
            order.push_back(a);
            for (j=0;j<g[a].size();j++){
                d[g[a][j]]--;
                if (d[g[a][j]]==0) {
                    q.push(g[a][j]);
                }
            }
        }
        return order.size()==numCourses;
    }
};
// @lc code=end

