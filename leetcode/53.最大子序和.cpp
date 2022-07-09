/*
 * @lc app=leetcode.cn id=53 lang=cpp
 *
 * [53] 最大子序和
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=INT_MIN;
        int tmp=0;
        for(int i=0;i<nums.size();i++){
            tmp += nums[i];
            if(ans<tmp)ans=tmp;
            if(tmp<0)tmp=0;
        }
        return ans;
    }
};
// @lc code=end

