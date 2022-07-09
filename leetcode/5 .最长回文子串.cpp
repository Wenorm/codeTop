/*
 * @lc app=leetcode.cn id=5 lang=cpp
 *
 * [5] 最长回文子串
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestPalindrome(string s) {
        int ans=0;
        string str;
        for(int i=0;i<s.length();i++){

            //单
            int left=i;
            int right=i;
            while(s[left]==s[right]){
                if(ans<right-left+1){
                    ans = right-left+1;
                    str = s.substr(left, ans);
                }
                left--;
                right++;
                if(left<0)break;
                if(right>=s.length())break;
            }

            //双
            left=i;
            right=i+1;
            if(right<s.length()){
                while(s[left]==s[right]){
                    if(ans<right-left+1){
                        ans = right-left+1;
                        str = s.substr(left, ans);
                    }
                    left--;
                    right++;
                    if(left<0)break;
                    if(right>=s.length())break;
                }
            }
        }
        return str;
    }
};
// @lc code=end

