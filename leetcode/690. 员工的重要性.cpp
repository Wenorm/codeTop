/*
 * @lc app=leetcode.cn id=690 lang=cpp
 *
 * [690] 员工的重要性
 */

// @lc code=start

// Definition for Employee.
// class Employee {
// public:
//     int id;
//     int importance;
//     vector<int> subordinates;
// };

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:

    unordered_map<int,Employee*>mp;
    int dfs(int id){
        Employee *employee = mp[id];
        int total = employee->importance;
        for(int subid:employee->subordinates){
            total+=dfs(subid);
        }
        return total;
    }

    int getImportance(vector<Employee*> employees, int id) {
        for(auto &employee:employees){
            mp[employee->id]=employee;
        }
        return dfs(id);
    }
};
// @lc code=end

