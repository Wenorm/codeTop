/*
 * @lc app=leetcode.cn id=121 lang=cpp
 *
 * [121] 买卖股票的最佳时机
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0;
        int right=left+1;
        int ans=0;
        while(right<prices.size()){
            if(prices[right]<=prices[left]){
                left = right;
            }
            else{
                if(ans<prices[right]-prices[left]){
                    ans = prices[right]-prices[left];
                }
            }
            right++;
        }
        return ans;
    }
};
// @lc code=end

