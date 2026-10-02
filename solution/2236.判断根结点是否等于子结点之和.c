/*
 * @lc app=leetcode.cn id=2236 lang=c
 *
 * [2236] 判断根结点是否等于子结点之和
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool checkTree(struct TreeNode* root) {
    char ans;
    root[0] == root[1] + root[2] ? ans = "true" : ans = "flase";
    return ans;
}
// @lc code=end

