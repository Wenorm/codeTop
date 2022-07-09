/*
 * @lc app=leetcode.cn id=13 lang=cpp
 *
 * [13] 罗马数字转整数
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        int ans=0;
        int prenum = 0;
        int currnum=0;
        prenum = getNum(s[0]);
        for(int i=1;i<s.length();i++){
            currnum = getNum(s[i]);
            if(currnum > prenum){
                ans -= prenum;
            }
            else {
                ans += prenum;
            }
            prenum = currnum;
        }
        ans += prenum;
        return ans;
    }

    int getNum(char c){
        if(c == 'I'){
            return 1;
        }
        if(c == 'V'){
            return 5;
        }
        if(c == 'X'){
            return 10;
        }
        if(c == 'L'){
            return 50;
        }
        if(c == 'C'){
            return 100;
        }
        if(c == 'D'){
            return 500;
        }
        if(c == 'M'){
            return 1000;
        }
        return 0;
    }
};
// @lc code=end

