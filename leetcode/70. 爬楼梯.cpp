/*
 * @lc app=leetcode.cn id=70 lang=cpp
 *
 * [70] 爬楼梯
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int climbStairs(int n) {
        int pre = 1;
        int curr = 1;
        if(n==1){
            return 1;
        }
        for(int i=1;i<n;i++){
            int tmp = pre + curr;
            pre = curr;
            curr = tmp;
        }
        return curr;
    }
};
// @lc code=end

