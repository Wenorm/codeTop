/*
 * @lc app=leetcode.cn id=387 lang=cpp
 *
 * [387] 字符串中的第一个唯一字符
 */

// @lc code=start
class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>ump;
        for(int i=0;i<s.length();i++){
            ump[s[i]]++;

        }
        for(int i=0;i<s.length();i++){
            if(ump.count(s[i])){
                if(ump[s[i]]==1)return i;
            }
        }
        return -1;
    }
};
// @lc code=end

