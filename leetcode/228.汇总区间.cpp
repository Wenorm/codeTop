/*
 * @lc app=leetcode.cn id=228 lang=cpp
 *
 * [228] 汇总区间
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int i=0;
        int len = nums.size();
        vector<string> vec;
        while(i<len){
            int left = i;
            while(i+1<len&&nums[i]+1==nums[i+1]){
                i++;
            }
            int right = i;
            string tmp="";
            if(left<right){
                tmp.append(to_string(nums[left]));
                tmp.append("->");
                tmp.append(to_string(nums[right]));
            }
            else {
                tmp.append(to_string(nums[left]));
            }
            vec.push_back(tmp);
            i++;
        }
        return vec;
    }
};
// @lc code=end

