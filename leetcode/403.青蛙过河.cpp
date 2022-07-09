/*
 * @lc app=leetcode.cn id=403 lang=cpp
 *
 * [403] 青蛙过河
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int n;
    set<int>se;
    bool dfs(vector<int> stones, int index,int k){
        if(index==n-1){
            return true;
        }
        int key = index*1000+k;
        if(se.find(key)!=se.end()){//存在该路线
            return false;
        }
        else {
            se.insert(key);
        }

        for(int i=index+1;i<n;i++){
            int gap = stones[i]-stones[index];
            if(k-1<=gap&&gap<=k+1){
                if(dfs(stones, i, gap)){
                    return true;
                }
            }
            else if(gap>k+1){
                break;
            }
        }
        return false;
    }
    bool canCross(vector<int>& stones) {
        n=stones.size();
        return dfs(stones,0,0);
    }
};
// @lc code=end

