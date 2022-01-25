/*
 * @lc app=leetcode id=46 lang=c
 *
 * [46] Permutations
 */

// @lc code=start


/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */

int** permute(int* nums, int numsSize, int* returnSize, int** returnColumnSizes){
    int path[numsSize];
    int visited[numsSize];
    int **re;

    re=(int**)malloc(sizeof(int*)*999*999);
    *returnSize=0;
    *returnColumnSizes=malloc(sizeof(int)*999*999);
    memset(visited, 0, sizeof(int)*numsSize);

    void dfs(int *path, int path_len) {
        int i;

        if (path_len==numsSize) {
            re[*returnSize]=malloc(sizeof(int)*numsSize);
            (*returnColumnSizes)[*returnSize]=numsSize;
            memcpy(re[*returnSize], path, numsSize*sizeof(int));
            (*returnSize)++;
            return;
        }
        
        for (i=0;i<numsSize;i++) {
            if (visited[i]==0) {
                path[path_len]=nums[i];
                path_len++;
                visited[i]=1;
                dfs(path,path_len);
                visited[i]=0;
                path_len--;
            }
        }
    }

    dfs(path, 0);
    return re;
}
// @lc code=end

