/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        bool ans=false;
        stack<char> sta;
        while (sta.size()>0)
        {
            sta.pop();
        }
        
        for(int i=0;i<s.length();i++){
            if(s[i]==')'||s[i]=='}'||s[i]==']'){
                //判断是否配对
                if(sta.size()==0)return false;
                char c = sta.top();
                sta.pop();
                if(s[i]==')'&&c!='(')return false;
                if(s[i]=='}'&&c!='{')return false;
                if(s[i]==']'&&c!='[')return false;
            }
            else{
                sta.push(s[i]);
            }
        }
        if(sta.size()==0){
            return true;
        }
        return false;
    }
};
// @lc code=end

