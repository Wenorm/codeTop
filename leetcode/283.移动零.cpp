/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] 移动零
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left=0;
        int right=0;
        while(left<nums.size()){
            if(right==nums.size()){
                nums[left]=0;
                left++;
                continue;
            }
            if(nums[right]==0){
                right++;
            }
            else {
                nums[left]=nums[right];
                left++;
                right++;
            }
        }
        
    }
};
// @lc code=end

