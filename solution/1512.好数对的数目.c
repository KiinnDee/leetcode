/*
 * @lc app=leetcode.cn id=1512 lang=c
 *
 * [1512] 好数对的数目
 */

// @lc code=start
int numIdenticalPairs(int* nums, int numsSize) {
    int cnt = 0;
    for (int i=0; i<=numsSize-2; i++)
    {
        for (int j=i+1; j<=numsSize-1; j++)
        {
            if (nums[i] == nums[j])
            {
                cnt ++;
            }
        }
    }
    return cnt;
}
// @lc code=end

