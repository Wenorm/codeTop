/*
 * @lc app=leetcode.cn id=112 lang=cpp
 *
 * [112] 路径总和
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
#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL){
            return false;
        }

        //叶子节点
        if(root->left==NULL && root->right == NULL){
            if(targetSum == root->val){
                return true;
            }
            return false;
        }
        //左边是空，查看右边是否有答案
        if(root->left == NULL){
            return hasPathSum(root->right, targetSum-(root->val));
        }
        //右边是空，查看左边是否有答案
        if(root->right==NULL){
            return hasPathSum(root->left, targetSum-(root->val));
        }
        //左右都不是空，随便一个都答案就行
        return hasPathSum(root->right, targetSum-(root->val)) || hasPathSum(root->left, targetSum-(root->val));
    }
};
// @lc code=end

