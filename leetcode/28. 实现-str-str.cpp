/*
 * @lc app=leetcode.cn id=28 lang=cpp
 *
 * [28] 实现 strStr()
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack==needle)return 0;
        if(needle.length()>haystack.length())return -1;
        for(int i=0;i<haystack.length()-needle.length() + 1;i++){
            bool flag=true;
            for(int j=0;j<needle.length();j++){
                if(haystack[j+i]!=needle[j]){
                    flag=false;
                    break;
                }
            }
            if(flag)return i;
        }
        return -1;
    }
};
// @lc code=end

