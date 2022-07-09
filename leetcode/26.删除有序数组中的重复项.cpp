/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除有序数组中的重复项
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0)return 0;
        int p1=0;
        int p2=1;
        if(nums.size()==0){
            return p1+1;
        }
        while(p2<nums.size()){
            if(nums[p1]!=nums[p2]){
                p1++;
                nums[p1]=nums[p2];
            }
            p2++;
        }
        return p1+1;
    }
};
// @lc code=end

