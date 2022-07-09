class Solution:
    def longestPalindromeSubseq(self, s: str) -> int:
        n=len(s)
        dp=[[0]*(n+1) for _ in range(n+1)]
        for i in range(0,n):
            dp[i][i]=1
        for l in range(2,n+1):
            for left in range(0,n):
                right=left+l-1
                if right>=n:
                    continue
                if s[left]==s[right]:
                    dp[left][right]=dp[left+1][right-1]+2
                else:
                    dp[left][right]=max(dp[left+1][right],dp[left][right-1])
        return dp[0][n-1]