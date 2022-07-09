/*
 * @lc app=leetcode.cn id=119 lang=cpp
 *
 * [119] 杨辉三角 II
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>pre;
        vector<int>curr;
        pre.push_back(1);
        if(rowIndex==0)return pre;
        for(int i=1;i<=rowIndex;i++){
            curr.clear();
            for(int j=0;j<i+1;j++){
                if(j==0){
                    curr.push_back(1);
                    continue;
                }
                if(j==i){
                    curr.push_back(1);
                    continue;
                }
                curr.push_back(pre[j-1]+pre[j]);
            }
            pre.clear();
            pre=curr;
        }
        return pre;
    }
};
// @lc code=end

