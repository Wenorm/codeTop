/*
 * @lc app=leetcode.cn id=405 lang=cpp
 *
 * [405] 数字转换为十六进制数
 */

// @lc code=start
class Solution {
public:
    string toHex(int num) {
        if(num==0){
            return "0";
        }
        string num2char="0123456789abcdef";
        unsigned int n=num;
        string res="";
        while(n>0){
            res = num2char[n&15] + res;
            n>>=4;
        }
        return res;
    }
};
// @lc code=end

