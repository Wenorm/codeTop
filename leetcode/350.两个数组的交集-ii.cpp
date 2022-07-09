/*
 * @lc app=leetcode.cn id=350 lang=cpp
 *
 * [350] 两个数组的交集 II
 */

// @lc code=start
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int index1=0,index2=0;
        int len1=nums1.size();
        int len2=nums2.size();
        vector<int>ans;
        while(index1<len1&&index2<len2){
            if(nums1[index1]<nums2[index2]){
                index1++;
            }
            else if(nums1[index1]>nums2[index2]){
                index2++;
            }
            else {
                ans.push_back(nums1[index1]);
                index1++;
                index2++;
            }
        }
        return ans;
    }
};
// @lc code=end

