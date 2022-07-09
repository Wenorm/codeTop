/*
 * @lc app=leetcode.cn id=235 lang=cpp
 *
 * [235] 二叉搜索树的最近公共祖先
 */

// @lc code=start

// Definition for a binary tree node.
#include<bits/stdc++.h>
using namespace std;
// struct TreeNode {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
// };

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* ans = root;
        while(ans!=NULL){
            if(ans->val > p->val && ans->val > q->val){
                ans=ans->left;
            }
            else if(ans->val<p->val && ans->val < q->val){
                ans=ans->right;
            }
            else {
                return ans;
            }
        }
        return ans;
    }
};
// @lc code=end

