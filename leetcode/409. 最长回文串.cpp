/*
 * @lc app=leetcode.cn id=409 lang=cpp
 *
 * [409] 最长回文串
 */

// @lc code=start
class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mp;
        for(char c:s){
            mp[c]++;
        }
        int ans=0;
        for(auto p:mp){
           int num=p.second;
           ans+=(num/2*2);
           if(num%2==1&&ans%2==0){
               ans++;
           }
        }
        return ans;
    }
};
// @lc code=end

