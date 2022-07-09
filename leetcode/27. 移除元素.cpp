/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] 移除元素
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int p1=0;
        int p2=0;
        while(p2<nums.size()){
            if(nums[p2]!=val){
                nums[p1]=nums[p2];
                p1++;
            }
            p2++;
        }
        return p1;
    }
};
// @lc code=end

