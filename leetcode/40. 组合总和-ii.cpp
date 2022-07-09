/*
 * @lc app=leetcode.cn id=40 lang=cpp
 *
 * [40] 组合总和 II
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> ans;
    vector<int>path;
    vector<int>candidates;
    void dfs(int index, int target){
        
        if(target==0){
            ans.emplace_back(path);
            return;
        }

        for(int i=index;i<candidates.size()&&target-candidates[i]>=0;i++){
            if(i>index&&candidates[i]==candidates[i-1]){ 
                continue;
            }
            path.emplace_back(candidates[i]);  //放当前数
            dfs(i+1, target-candidates[i]);//放下一个数
            path.pop_back();
        }

    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        sort(candidates.begin(),candidates.end());
        this->candidates = candidates;
        dfs(0, target);
        return ans;
    }
};
// @lc code=end

