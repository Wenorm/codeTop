/*
 * @lc app=leetcode.cn id=9 lang=cpp
 *
 * [9] 回文数
 */
// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        string str = to_string(x);
        int l=0;
        int r=str.length()-1;
        while(l<r){
            if(str[l]!=str[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};
// @lc code=end

