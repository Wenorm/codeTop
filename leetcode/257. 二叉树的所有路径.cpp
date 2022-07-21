/*
 * @lc app=leetcode.cn id=257 lang=cpp
 *
 * [257] 二叉树的所有路径
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
    vector<string>ans;
    void solve(TreeNode* root, string tmp){
        if(root==NULL)return;
        tmp=tmp+"->"+std::to_string(root->val);
        if(root->left==NULL&&root->right==NULL){
            ans.push_back(tmp);
            return;
        }
        solve(root->left, tmp);
        solve(root->right, tmp);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        if(root==NULL)return ans;
        string tmp="";
        tmp=std::to_string(root->val);
        if(root->left==NULL&&root->right==NULL){
            ans.push_back(tmp);
            return ans;
        }
        solve(root->left, tmp);
        solve(root->right, tmp);
        return ans;
    }
};
// @lc code=end

