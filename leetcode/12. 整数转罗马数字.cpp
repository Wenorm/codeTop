/*
 * @lc app=leetcode.cn id=12 lang=cpp
 *
 * [12] 整数转罗马数字
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string intToRoman(int num) {
        int nums[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string str[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        int index=0;
        string ans = "";
        while(index<13){
            while(num>=nums[index]){
                ans+=str[index];
                num-=nums[index];
            }
            index++;
        }
        return ans;
    }
};
// @lc code=end

