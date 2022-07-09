/*
 * @lc app=leetcode.cn id=66 lang=cpp
 *
 * [66] 加一
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        int carry=1;
        for(int i=digits.size()-1;i>=0;i--){
            int num = digits[i];
            ans.push_back((num+carry)%10);
            carry = (num+carry)/10;
        }
        if(carry>0){
            ans.push_back((carry)%10);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
// @lc code=end

