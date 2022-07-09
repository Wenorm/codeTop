/*
 * @lc app=leetcode.cn id=219 lang=cpp
 *
 * [219] 存在重复元素 II
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        set<int>se;
        for(int i=0;i<nums.size()&&i<=k;i++){
            if(se.find(nums[i])!=se.end()){
                return true;
            }
            se.insert(nums[i]);
        }
        if(nums.size()<=k){
            return false;
        }

        int p1=0;
        int p2=k+1;
        while(p2<nums.size()){
            se.erase(nums[p1]);
            if(se.find(nums[p2])!=se.end()){
                return true;
            }
            se.insert(nums[p2]);
            p1++;
            p2++;
        }
        return false;
    }
};
// @lc code=end

