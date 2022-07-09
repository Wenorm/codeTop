/*
 * @lc app=leetcode.cn id=349 lang=cpp
 *
 * [349] 两个数组的交集
 */

// @lc code=start

#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<set>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>se1,se2,se;
        for(int i=0;i<nums1.size();i++){
            se1.insert(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            se2.insert(nums2[i]);
        }
        set_intersection(se1.begin(),se1.end(),se2.begin(),se2.end(),inserter(se,se.begin()));
        vector<int>ans;
        set<int>::iterator it=se.begin();
        while(it!=se.end()){
            ans.push_back(*it);
            it++;
        }
        return ans;
    }
};
// @lc code=end

