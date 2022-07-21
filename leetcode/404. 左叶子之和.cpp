/*
 * @lc app=leetcode.cn id=404 lang=cpp
 *
 * [404] 左叶子之和
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
    bool isLeafNode(TreeNode* root){
        if(!root->left&&!root->right){
            return true;
        }
        return false;
    }
    int dfs(TreeNode* root){
        int ans=0;
        if(root->left){
            ans += isLeafNode(root->left)?root->left->val:dfs(root->left);
        }
        if(root->right&&!isLeafNode(root->right)){
            ans += dfs(root->right);
        }
        return ans;
    }
    int sumOfLeftLeaves(TreeNode* root) {
        return root?dfs(root):0;
    }
};
// @lc code=end

