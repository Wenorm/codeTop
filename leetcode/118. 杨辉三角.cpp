/*
 * @lc app=leetcode.cn id=118 lang=cpp
 *
 * [118] 杨辉三角
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        if(numRows == 0 ){
            return ans;
        }
        vector<int>tmp;
        tmp.push_back(1);
        ans.push_back(tmp);
        for(int i=1;i<numRows;i++){
            tmp.clear();
            vector<int>pre = ans[ans.size()-1];
            for(int j=0;j<i+1;j++){
                if(j==0){
                    tmp.push_back(1);
                    continue;
                }
                if(j==i){
                    tmp.push_back(1);
                    continue;
                }
                tmp.push_back(pre[j-1]+pre[j]);
            }
            ans.push_back(tmp);
        }
        return ans;
    }
};
// @lc code=end

