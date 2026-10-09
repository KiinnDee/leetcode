/*
 * @lc app=leetcode.cn id=1534 lang=c
 *
 * [1534] 统计好三元组
 */

// @lc code=start
int countGoodTriplets(int* arr, int arrSize, int a, int b, int c) {
    int cnt = 0;
    for(int i = 0; i < arrSize-2; i++)
    {
        for(int j = i+1; j < arrSize-1; j++)
        {
            for(int k = j+1; k < arrSize; k++)
            {
                if(abs(arr[i] - arr[j]) <= a && abs(arr[j] - arr[k]) <= b && abs(arr[i] - arr[k]) <= c) 
                {
                    cnt ++;
                }
            }
        }
    }
    return cnt;
}
// @lc code=end

