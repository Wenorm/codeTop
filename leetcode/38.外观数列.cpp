/*
 * @lc app=leetcode.cn id=38 lang=cpp
 *
 * [38] 外观数列
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:

    string count(string str){
        int cnt=0;
        char curr;
        string ans = "";
        for(int i=0;i<str.length();i++){
            if(cnt==0){
                curr=str[i];
                cnt++;
            }
            else if(curr==str[i]){
                cnt++;
            }
            else {
                ans += to_string(cnt);
                ans += curr;
                curr = str[i];
                cnt = 1;
            }
        }
        if(cnt!=0){
            ans += to_string(cnt);
            ans += curr;
            cnt = 0;
        }
        return ans;
    }

    string countAndSay(int n) {
        string ans="1";
        if(n==1)return ans;
        for(int i=1;i<n;i++){
            ans = count(ans);
        }
        return ans;
    }
};
// @lc code=end

