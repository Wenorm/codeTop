/*
 * @lc app=leetcode.cn id=392 lang=cpp
 *
 * [392] 判断子序列
 */

// @lc code=start
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0;
        int j=0;
        int n=s.length();
        int m=t.length();
        while(i<n&&j<m){
            if(s[i]==t[j]){
                i++;
            }
            j++;
        }
        return i==n;
    }
};
// @lc code=end

