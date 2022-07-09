/*
 * @lc app=leetcode.cn id=401 lang=cpp
 *
 * [401] 二进制手表
 */

// @lc code=start
class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string>ans;
        for(int i=0;i<12;i++){
            for(int j=0;j<60;j++){
                if(count1(i)+count1(j)==turnedOn){
                    ans.push_back(to_string(i)+":"+(j<10?"0"+to_string(j):to_string(j)));
                }
            }
        }
        return ans;
    }
    int count1(int n){
        int res=0;
        while(n!=0){
            if(n&1)res++;
            n=n>>1;
        }
        return res;
    }
};
// @lc code=end

