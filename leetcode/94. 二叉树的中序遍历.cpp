/*
 * @lc app=leetcode.cn id=94 lang=cpp
 *
 * [94] 二叉树的中序遍历
 */

// @lc code=start

// Definition for a binary tree node.
#include<bits/stdc++.h>
using namespace std;
// struct TreeNode {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// };

class Solution {
public:
    vector<int> ans;
    void solve(TreeNode* root){
        if(NULL==root)return;
        solve(root->left);
        ans.push_back(root->val);
        solve(root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        if(NULL==root)return ans;
        solve(root->left);
        ans.push_back(root->val);
        solve(root->right);
        return ans;
    }
};
// @lc code=end

