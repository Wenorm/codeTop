/*
 * @lc app=leetcode.cn id=4 lang=cpp
 *
 * [4] 寻找两个正序数组的中位数
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        int mid = (m+n)/2;
        bool flag;
        if((m+n)%2){//奇数
            flag=true;
        }
        else {//偶数
            flag=false;
        }
        int p1=0;
        int p2=0;
        double a=0;
        double b=0;
        int cnt=0;//已经处理的数字的数量
        while(cnt<=mid){
            a=b;
            if(p1>=n){ 
                b=nums2[p2++];
            }
            else if(p2>=m){
                b=nums1[p1++];
            }
            else if(nums1[p1]<nums2[p2]){
                b=nums1[p1++];
            }
            else{
                b=nums2[p2++];
            }
            cnt++; 
        }
        if(flag)return b;
        return (a+b)/2;
    }
};
// @lc code=end

