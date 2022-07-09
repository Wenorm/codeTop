/*
 * @lc app=leetcode.cn id=8 lang=cpp
 *
 * [8] 字符串转换整数 (atoi)
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int myAtoi(string s) {
        int len=s.length();
        int p=0;
        long long ans=0;
        int MAX = INT_MAX;
        int MIN = INT_MIN;
        //去掉空格
        while(p<len&&s[p]==' '){
            p++;
        }
        if(!(p<len)){
            return 0;
        }
        if(s[p]=='-'){
            p++;
            while(p<len&&s[p]>='0'&&s[p]<='9'){
                ans = ans*10 - (s[p]-'0');
                if(ans<MIN){
                    return MIN;
                }
                p++;
            }
            return ans;
        }
        else if(s[p]=='+'){
            p++;
            while(p<len&&s[p]>='0'&&s[p]<='9'){
                ans = ans*10 + (s[p]-'0');
                if(ans>MAX){
                    return MAX;
                }
                p++;
            }
            return ans;
        }
        else if(s[p]>='0'&&s[p]<='9'){
            while(p<len&&s[p]>='0'&&s[p]<='9'){
                ans = ans*10 + (s[p]-'0');
                if(ans>MAX){
                    return MAX;
                }
                p++;
            }
            return ans;
        }
        else {
            return 0;
        }
        
    }
};
// @lc code=end

