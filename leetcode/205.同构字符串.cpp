/*
 * @lc app=leetcode.cn id=205 lang=cpp
 *
 * [205] 同构字符串
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        for(int i=0;i<s.length();i++){
            if(s.find(s[i])!=t.find(t[i]))return false;
        }
        return true;
    }
};
// @lc code=end

