
// @before-stub-for-debug-end
/*
 * @lc app=leetcode.cn id=29 lang=cpp
 *
 * [29] 两数相除
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==0)return 0;
        if(divisor==1){
            return dividend;
        }
        if(divisor==-1){
            if(dividend>INT_MIN){
                return -dividend;
            }
            else {
                return INT_MAX;
            }
        }

        long long a = dividend;
        long long b = divisor;
        int sign;
        if((a<0&&b<0)||(a>0&&b>0)){
            sign=1;
        }
        else {
            sign=-1;
        }
        a=a>0?a:-a;
        b=b>0?b:-b;


        long long ans = div(a,b);
        if(sign>0){
            return ans>INT_MAX?INT_MAX:ans;
        }
        return -ans;
    }
    long long div(long long a,long long b){
        if(a<b)return 0;
        long long tb = b;
        long long ans=1;//商
        while((tb+tb)<=a){
            ans = ans + ans;
            tb = tb + tb;
        }
        return ans + div(a-tb, b);
    }
};
// @lc code=end

