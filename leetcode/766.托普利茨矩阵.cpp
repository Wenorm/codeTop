/*
 * @lc app=leetcode.cn id=766 lang=cpp
 *
 * [766] 托普利茨矩阵
 */

// @lc code=start
#include<vector>
using namespace std;
class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>matrix) {
        map<int,int>mp;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(mp.find(i-j)==mp.end()){
                    mp[i-j]=matrix[i][j];
                }
                if(mp[i-j]!=matrix[i][j]){
                    return false;
                }
            }
        }
        return true;
    }
};
// @lc code=end

