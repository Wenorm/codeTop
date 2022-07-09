/*
 * @lc app=leetcode.cn id=39 lang=cpp
 *
 * [39] 组合总和
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> ans;
    void dfs(vector<int>& candidates, vector<int>& combine, int target, int idx){
        if(idx==candidates.size()){
            return;
        }
        if(target==0){
            ans.emplace_back(combine);
            return;
        }
        //使用当前数字
        if(target-candidates[idx]>=0){
            combine.emplace_back(candidates[idx]);
            dfs(candidates, combine, target-candidates[idx], idx);
            combine.pop_back();
        }
        //使用下一个数字
        if(idx+1 < candidates.size() && target-candidates[idx+1]>=0){
            dfs(candidates, combine, target, idx+1);
        }        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>combine;
        sort(candidates.begin(),candidates.end());
        dfs(candidates, combine, target, 0);
        return ans;
    }
};
// @lc code=end

