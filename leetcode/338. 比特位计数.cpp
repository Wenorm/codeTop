/*
 * @lc app=leetcode.cn id=338 lang=cpp
 *
 * [338] 比特位计数
 */

// @lc code=start
class Solution {
public:
    vector<int>ans;
    vector<int> countBits(int n) {
        ans.push_back(0);
        for(int i=1;i<=n;i++){
            if(i%2){
                ans.push_back(ans[i-1]+1);
            }
            else{
                ans.push_back(ans[i>>1]);
            }
        }
        return ans;
    }
};
// @lc code=end

