/*
 * @lc app=leetcode.cn id=18 lang=cpp
 *
 * [18] 四数之和
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        if(nums.size()<4){
            return ans;
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-3;i++){
            for(int j=i+1;j<nums.size()-2;j++){
                int left = j+1;
                int right=nums.size()-1;
                int sum;
                while(left<right){
                    sum = nums[i]+nums[j]+nums[left]+nums[right];
                    if(sum<target){
                        left++;
                    }
                    else if(sum>target){
                        right--;
                    }
                    else {
                        vector<int>tmp;
                        tmp.push_back(nums[i]);
                        tmp.push_back(nums[j]);
                        tmp.push_back(nums[left]);
                        tmp.push_back(nums[right]);
                        while(left+1<nums.size()&&nums[left]==nums[left+1]){
                            left++;
                        }
                        while(right-1>=0&&nums[right]==nums[right-1]){
                            right--;
                        }
                        left++;
                        right--;
                        ans.push_back(tmp);
                    }
                }
                while(j+1<nums.size()&&nums[j]==nums[j+1]){
                    j++;
                }
            }
            while(i+1<nums.size()&&nums[i]==nums[i+1]){
                i++;
            }
        }
        return ans;
    }
};
// @lc code=end

