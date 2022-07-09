/*
 * @lc app=leetcode.cn id=345 lang=cpp
 *
 * [345] 反转字符串中的元音字母
 */

// @lc code=start
class Solution {
public:
    bool isyuan(char c){
        c=tolower(c);
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')return true;
        return false;
    }
    string reverseVowels(string s) {
        int left=0;
        int right=s.length();
        while(left<right){
            while(left<right&&!isyuan(s[left]))left++;
            while(left<right&&!isyuan(s[right]))right--;
            if(left>=right)return s;
            char tmp;
            tmp=s[left];
            s[left]=s[right];
            s[right]=tmp;
            left++;
            right--;
        }
        return s;
    }
};
// @lc code=end

