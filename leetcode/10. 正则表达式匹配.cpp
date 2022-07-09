/*
 * @lc app=leetcode.cn id=10 lang=cpp
 *
 * [10] 正则表达式匹配
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isMatch(string s, string p) {
        int lens = s.length()+1;
        int lenp = p.length()+1;
        bool dp[lens][lenp];
        memset(dp,false,sizeof(dp));
        dp[0][0]=true;
        for(int i=2;i<lenp;i++){
            if(p[i-1]=='*'){
                dp[0][i]=dp[0][i-2];
            }
        }
        for(int r=1;r<lens;r++){
            int i = r-1;
            for(int c=1;c<lenp;c++){
                int j=c-1;
                if(p[j]==s[i]){//相等
                    dp[r][c]=dp[r-1][c-1];
                }
                else if(p[j]=='.'){
                    dp[r][c]=dp[r-1][c-1];
                }
                else if(p[j]=='*'){
                    if(p[j-1]==s[i]||p[j-1]=='.'){
                        dp[r][c]=dp[r-1][c]||dp[r][c-2];
                    }
                    else{
                        dp[r][c]=dp[r][c-2];
                    }
                }
                else {
                    dp[r][c] = false;
                }
                
            }
        }
        return dp[lens-1][lenp-1];
    }
};
// @lc code=end

