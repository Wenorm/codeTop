/*
 * @lc app=leetcode.cn id=290 lang=cpp
 *
 * [290] 单词规律
 */

// @lc code=start
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> res;
        stringstream input(s);
        string str;
        while(input>>str){
            res.push_back(str);
        }
        if(res.size()!=pattern.length()){
            return false;
        }
        map<char,string>mp;
        map<string,char>mp1;

        for(int i=0;i<pattern.length();i++){
            if(mp.find(pattern[i])==mp.end()){
                mp[pattern[i]]=res[i];
            }
            else if(mp[pattern[i]]!=res[i]){
                return false;
            }
            
            if(mp1.find(res[i])==mp1.end()){
                mp1[res[i]]=pattern[i];
            }
            else if(mp1[res[i]]!=pattern[i]){
                return false;
            }
        }
        return true;
    }
};
// @lc code=end

