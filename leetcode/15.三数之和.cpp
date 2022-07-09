/*
 * @lc app=leetcode.cn id=15 lang=cpp
 *
 * [15] 三数之和
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        if(nums.size()<=2)return ans;
        sort(nums.begin(), nums.end());
        int i=0;

        while(i<nums.size()&&nums[i]<=0){
            int left = i+1;
            int right = nums.size()-1;
            while(left<right){
               if(nums[i]+nums[left]+nums[right]<0){
                    left++;                   
                }
                else if(nums[i]+nums[left]+nums[right]>0){
                    right--;
                }
                else {
                    vector<int>tmp;
                    tmp.push_back(nums[i]);
                    tmp.push_back(nums[left]);
                    tmp.push_back(nums[right]);
                    ans.push_back(tmp);
                    while(left+1<=right&&nums[left] == nums[left+1]){
                        left++;
                    }
                    while(left+1<=right&&nums[right]==nums[right-1])
                    {
                        right--;
                    }
                    left++;
                    right--;
                }
            }
            while(i+1<nums.size()&&nums[i]==nums[i+1]){
                i++;
            }
            i++;
        }
        return ans;
    }
};
// @lc code=end

