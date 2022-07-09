/*
 * @lc app=leetcode.cn id=17 lang=cpp
 *
 * [17] 电话号码的字母组合
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    
    vector<string>ans;
    void dfs(string digits, string tmp, int index){
        string strs[] = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        if(index>=digits.length()){
            ans.push_back(tmp);
            return;
        }
        for(int i=0;i<strs[(digits[index]-'0')-2].length();i++){
            dfs(digits,tmp+strs[(digits[index]-'0')-2][i],index+1);
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.length()==0)return ans;
        dfs(digits,"",0);
        return ans;
    }
};
// @lc code=end

