/*
 * @lc app=leetcode.cn id=58 lang=cpp
 *
 * [58] 最后一个单词的长度
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.length()==0)return 0;
        istringstream str(s);
        string out;
        while(str>>out){
            continue;
        }
        if(out == " ")return 0;
        return out.length();
    }
};
// @lc code=end

