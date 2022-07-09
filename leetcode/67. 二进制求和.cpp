/*
 * @lc app=leetcode.cn id=67 lang=cpp
 *
 * [67] 二进制求和
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string addBinary(string a, string b) {
        string ans="";
        int p1=0;
        int p2=0;
        int carry=0;
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        while(p1<a.length()||p2<b.length()){
            string c1 = "0";
            string c2 = "0";
            if(p1<a.length()){
                c1 = a.substr(p1,1);
            }
            if(p2<b.length()){
                c2 = b.substr(p2,1);
            }
            int tmp = stoi(c1) + stoi(c2) + carry;
            carry = tmp/2;
            tmp = tmp%2;
            ans += to_string(tmp);
            p1++;
            p2++;
        }
        if(carry){
            ans += to_string(carry);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
// @lc code=end

