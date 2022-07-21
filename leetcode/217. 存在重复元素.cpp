/*
 * @lc app=leetcode.cn id=217 lang=cpp
 *
 * [217] 存在重复元素
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int>se;
        for(int i=0;i<nums.size();i++){
            if(se.find(nums[i])!=se.end()){
                return true;
            }
            se.insert(nums[i]);
        }
        return false;
    }
};
// @lc code=end

