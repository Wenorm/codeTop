/*
 * @lc app=leetcode.cn id=783 lang=cpp
 *
 * [783] 二叉搜索树节点最小距离
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int ans = INT_MAX;
    TreeNode* pre;
    void dfs(TreeNode* root){
        if(root==nullptr){
            return;
        }
        dfs(root->left);
        if(pre==nullptr){
            pre=root;
        }
        else {
            ans = min(ans, root->val-pre->val);
            pre = root;
        }
        dfs(root->right);
        
    }
    int minDiffInBST(TreeNode* root) {
        pre = nullptr;
        dfs(root);
        return ans;
    }
};
// @lc code=end

