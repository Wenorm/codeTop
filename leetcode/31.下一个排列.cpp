/*
 * @lc app=leetcode.cn id=31 lang=cpp
 *
 * [31] 下一个排列
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        //从左到右找第一个升序
        int i;
        for(i = nums.size()-1;i>=0;i--){
            if(i-1>=0&&nums[i]>nums[i-1]){
                break;
            }
        }
        //没有升序直接返回升序
        if(i==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
        //从右向左找第一个比左边的小数大的大数，并交换
        int j;
        for(j = nums.size()-1;j>=i;j--){
            if(nums[j]>nums[i-1]){
                break;
            }
        }
        swap(nums[i-1],nums[j]);
        //将右边的结果升序排序
        sort(nums.begin()+i, nums.end());
    }
};
// @lc code=end

