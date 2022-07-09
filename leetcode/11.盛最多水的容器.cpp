/*
 * @lc app=leetcode.cn id=11 lang=cpp
 *
 * [11] 盛最多水的容器
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=0;
        int left = 0;
        int right = height.size()-1;
        while(left<right){
            int tmp;
            if(height[left]<height[right]){
                tmp = (right-left)*height[left];
                left++;
            }
            else {
                tmp = (right-left)*height[right];
                right--;
            }
            if(tmp>ans)ans=tmp;
        }
        return ans;
    }
};
// @lc code=end

