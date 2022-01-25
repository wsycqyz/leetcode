/*
 * @lc app=leetcode id=79 lang=c
 *
 * [79] Word Search
 */

// @lc code=start


bool exist(char** board, int boardSize, int* boardColSize, char * word){
    int len=0;
    int i,j;

    bool dfs(int ii, int jj) {
        bool ret;
        char tmp;
        if (len==strlen(word)) {
            return true;
        }
        if (ii<0||ii>=boardSize||jj<0||jj>=boardColSize[0]) {
            return false;
        }
        if (board[ii][jj]!=word[len]) {
            return false;
        }

        len++;
        tmp=board[ii][jj];
        board[ii][jj]='*';
        ret=dfs(ii,jj+1) || dfs(ii+1,jj) || dfs(ii,jj-1) || dfs(ii-1,jj);
        board[ii][jj]=tmp;
        len--;
        return ret;
    }

    for (i=0;i<boardSize;i++) {
        for (j=0;j<boardColSize[i];j++) {
            if (dfs(i,j)==true) {
                return true;
            }
        }
    }

    return false;
}
// @lc code=end

