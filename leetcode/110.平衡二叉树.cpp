/*
 * @lc app=leetcode.cn id=110 lang=cpp
 *
 * [110] 平衡二叉树
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
    int height(TreeNode* root){
        if(root==NULL)return 0;
        int left = height(root->left);
        int right = height(root->right);
        if(left>right){
            return left+1;
        }
        return right+1;
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL)return true;
        if(abs(height(root->left)-height(root->right))<=1&&isBalanced(root->left)&&isBalanced(root->right)){
            return true;
        }
        return false;
    }
};
// @lc code=end

