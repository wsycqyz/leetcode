/*
 * @lc app=leetcode id=62 lang=c
 *
 * [62] Unique Paths
 */

// @lc code=start


int uniquePaths(int m, int n){
    int i,j;
    int a[m][n];

    for (i=0;i<m;i++) {
        for (j=0;j<n;j++) {
            if (i==0) {
                a[0][j]=1;
                continue;
            }
            if (j==0) {
                a[i][0]=1;
                continue;
            }
            a[i][j]=a[i-1][j]+a[i][j-1];            
        }
    }
    return a[i-1][j-1];
}
// @lc code=end

