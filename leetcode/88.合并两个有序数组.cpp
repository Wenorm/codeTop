/*
 * @lc app=leetcode.cn id=88 lang=cpp
 *
 * [88] 合并两个有序数组
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=0;i<n;i++){
            nums1[m+i] = nums2[i];
            int tmp = nums1[m+i];
            int j = m + i-1;
            for(;j>=0;j--){
                if(nums1[j]>tmp){
                    nums1[j+1]=nums1[j];
                }
                else {
                    nums1[j+1]=tmp;
                    break;
                }
            }
            if(j<0){
                nums1[0]=tmp;
            }
        }
    }
};
// @lc code=end

