class Solution:
    def maximalSquare(self, matrix: List[List[str]]) -> int:
        m,n=len(matrix),len(matrix[0])
        dp=[[0]*(n+1) for _ in range(m+1)]
        res=0
        for i in range(0,m):
            for j in range(0,n):
                if matrix[i][j]=='1':
                    dp[i+1][j+1]=min(dp[i][j+1],dp[i+1][j],dp[i][j])+1
                else:
                    dp[i+1][j+1]=0
                res=max(res,dp[i+1][j+1])
        return res**2