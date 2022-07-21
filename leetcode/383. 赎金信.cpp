/*
 * @lc app=leetcode.cn id=383 lang=cpp
 *
 * [383] 赎金信
 */

// @lc code=start
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int cnt[26];
        memset(cnt,0,sizeof(cnt));
        for(int i=0;i<magazine.length();i++){
            cnt[magazine[i]-'a']++;
        }
        for(int i=0;i<ransomNote.length();i++){
            cnt[ransomNote[i]-'a']--;
            if(cnt[ransomNote[i]-'a']<0)return false;
        }
        return true;
    }
};
// @lc code=end

