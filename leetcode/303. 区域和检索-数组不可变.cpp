/*
 * @lc app=leetcode.cn id=303 lang=cpp
 *
 * [303] 区域和检索 - 数组不可变
 */

// @lc code=start
class NumArray {
public:
    vector<int> mynums;
    NumArray(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            mynums.push_back(nums[i]);
        }
    }
    
    int sumRange(int left, int right) {
        int ans=0;
        for(int i=left;i<=right;i++){
            ans+=mynums[i];
        }
        return ans;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
// @lc code=end

