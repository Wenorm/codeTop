/*
 * @lc app=leetcode.cn id=16 lang=cpp
 *
 * [16] 最接近的三数之和
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int ans=nums[0]+nums[1]+nums[2];
        int sum;
        for(int i=0;i<nums.size()-2;i++){
            int left = i+1;
            int right=nums.size()-1;
            while (left<right)
            {
                sum = nums[i]+nums[left]+nums[right];
                if(abs(sum-target)<abs(ans-target)){
                    ans=sum;
                }
                if(sum<target){
                    left++;
                }
                else if(sum>target){
                    right--;
                }
                else {
                    return sum;
                }

            }
            
            
        }
        return ans;
    }
};
// @lc code=end

