/*
 * @lc app=leetcode.cn id=389 lang=cpp
 *
 * [389] 找不同
 */

// @lc code=start
class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> cnt(26,0);
        for(char ch:s){
            cnt[ch-'a']++;
        }
        for(char ch:t){
            cnt[ch-'a']--;
            if(cnt[ch-'a']<0){
                return ch;
            }
        }
        return ' ';
    }
};
// @lc code=end

