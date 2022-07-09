/*
 * @lc app=leetcode.cn id=125 lang=cpp
 *
 * [125] 验证回文串
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length()-1;
        while(left<right){
            while(left<s.length()&&!isalnum(s[left]))left++;
            while(right>=0&&!isalnum(s[right]))right--;
            if(left>=right)break;
            if(tolower(s[left])!=towlower(s[right])){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
// @lc code=end

