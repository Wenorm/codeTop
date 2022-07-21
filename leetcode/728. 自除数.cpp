#include<bits/stdc++.h>
using namespace std;
class Solution {
public:

    bool isSelfDividingNumbers(int num){
        int n = num;
        while(n){
            if(n%10==0){
                return false;
            }
            if(num%(n%10)!=0){
                return false;
            }
            n/=10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        for(int i=left;i<=right;i++){
            if(isSelfDividingNumbers(i)){
                ans.push_back(i);
            }

        }
        return ans;
    }
};