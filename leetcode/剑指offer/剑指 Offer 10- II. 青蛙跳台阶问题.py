class Solution:
    def numWays(self, n: int) -> int:
        if n == 0:
            return 1
        if n <= 2:
            return n
        dp=[0]*(n+1)
        dp[0]=1
        dp[1]=1
        dp[2]=2
        if n <=2:
            return dp[n]
        for i in range(3,n+1):
            dp[i]=dp[i-1]+dp[i-2]
        return dp[n]%(10**9+7)