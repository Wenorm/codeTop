/*
 * @lc app=leetcode.cn id=22 lang=cpp
 *
 * [22] 括号生成
 */

// @lc code=start
class Solution {
public:
    vector<string>ans;
    void dfs(string tmp, int left, int right){
        if(left == 0 && right == 0){
            ans.push_back(tmp);
            return;
        }
        if(left>right){
            return;
        }
        if(left>0){
            dfs(tmp+'(',left-1,right);
        }
        if(right>0){
            dfs(tmp+')',left, right-1);
        }
    }
    vector<string> generateParenthesis(int n) {
        if(n==0)return ans;
        dfs("", n ,n);
        return ans;
    }
};
// @lc code=end

