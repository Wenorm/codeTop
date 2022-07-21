/*
 * @lc app=leetcode.cn id=204 lang=cpp
 *
 * [204] 计数质数
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countPrimes(int n) {
        int ans=0;
        vector<bool>signs(n,true);
        for(int i=2;i<n;i++){
            if(signs[i]){
                ans++;
                for(int j=i+i;j<n;j+=i){
                    signs[j]=false;
                }
            }
        }
        return ans;
    }
};
// @lc code=end

