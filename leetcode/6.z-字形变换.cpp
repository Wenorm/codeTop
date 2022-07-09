/*
 * @lc app=leetcode.cn id=6 lang=cpp
 *
 * [6] Z 字形变换
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1)return s;

        vector<vector<char>>vec;
        for(int i=0;i<numRows;i++){
            vector<char>v;
            vec.push_back(v);
        }
        int row = 0;
        bool flag=true;
        for(int i=0;i<s.length();i++){
            vec[row].push_back(s[i]);
            if(flag){
                row++;
            }
            else {
                row--;
            }
            if(row>=numRows){
                row = numRows - 2;
                flag=false;
            }
            else if(row<0){
                row = 1;
                flag=true;
            }
            
        }
        string ans="";
        for(int i=0;i<vec.size();i++){
            for(int j=0;j<vec[i].size();j++){
                ans+=vec[i][j];
            }
        }
        return ans;
    }
};
// @lc code=end

