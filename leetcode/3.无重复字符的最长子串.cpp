/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>se;
        int ans=0;
        int left=0;
        for(int i=0;i<s.length();i++){
            //有
            while(se.find(s[i])!=se.end()){
                se.erase(s[left]);
                left++;
            }
            ans = max(ans, i-left+1);
            se.insert(s[i]);
        }
        return ans;
    }
};
// @lc code=end

