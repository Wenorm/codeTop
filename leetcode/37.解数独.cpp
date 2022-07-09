/*
 * @lc app=leetcode.cn id=37 lang=cpp
 *
 * [37] 解数独
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bitset<9> getPossibleStatus(int x, int y){ //返回所有可能的数字
        return ~(rows[x]|cols[y]|cells[x/3][y/3]);
    }

    vector<int> getNext(vector<vector<char>>& board){
        vector<int> ret;
        int minCnt = 10;
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[i].size();j++){
                if(board[i][j]!='.')continue;
                auto curr = getPossibleStatus(i,j);  //获取能填的位置
                if(curr.count()>=minCnt)continue;
                ret = {i,j};
                minCnt = curr.count();  //目前能填的可能性最少的数量
            }
        }
        return ret;
    }

    void fillNum(int x, int y, int n, bool fillFlag){
        rows[x][n] = fillFlag? 1:0;
        cols[y][n] = fillFlag? 1:0;
        cells[x/3][y/3][n] = fillFlag? 1:0;
    }

    bool dfs(vector<vector<char>>& board, int cnt){
        if(cnt==0)return true;
        auto next = getNext(board); //可填的坐标
        auto bits = getPossibleStatus(next[0],next[1]);//能填的数
        for(int i=0;i<bits.size();i++){
            if(!bits.test(i)){//不能填
                continue;
            }
            //可以填
            fillNum(next[0],next[1],i,true);
            board[next[0]][next[1]]=i+'1'; //填数
            if(dfs(board, cnt-1))return true;
            //撤回
            fillNum(next[0],next[1],i,false);
            board[next[0]][next[1]]='.';
        }
        return false;
    }

    void solveSudoku(vector<vector<char>>& board) {
        rows = vector<bitset<9>>(9, bitset<9>());
        cols = vector<bitset<9>>(9, bitset<9>());
        cells = vector<vector<bitset<9>>>(3, vector<bitset<9>>(3, bitset<9>()));
        int cnt=0;
        int n;
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[i].size();j++){
                if(board[i][j]=='.'){
                    cnt++;
                    continue;
                }
                n = board[i][j] - '1';
                rows[i] |= (1<<n);
                cols[j] |= (1<<n);
                cells[i/3][j/3] |= (1<<n);      
            }
        }
        dfs(board, cnt);
    }
private:
    vector<bitset<9>>rows;
    vector<bitset<9>>cols;
    vector<vector<bitset<9>>> cells;

};
// @lc code=end

