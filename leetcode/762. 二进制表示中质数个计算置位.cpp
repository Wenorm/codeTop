/*
 * @lc app=leetcode.cn id=762 lang=cpp
 *
 * [762] 二进制表示中质数个计算置位
 */

// @lc code=start
class Solution {
public:
    bool isPrime(int num){
        if(num==1){
            return false;
        }
        if(num==2)return true;
        for(int i=2;i<=sqrt(num);i++){
            if(num%i==0){
                return false;
            }
        }
        return true;
    }
    int cnt1(int num){
        int ans=0;
        while(num){
            ans += num&1;
            num>>=1;
        }
        cout<<ans<<endl;
        return ans;
    }

    int countPrimeSetBits(int left, int right) {
        int ans=0;
        for(int i=left;i<=right;i++){
            ans += isPrime(cnt1(i));
        }
        return ans;
    }
};
// @lc code=end

