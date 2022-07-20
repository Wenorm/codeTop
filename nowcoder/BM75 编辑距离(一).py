class Solution:
    def editDistance(self , str1: str, str2: str) -> int:
        n=len(str1)
        m=len(str2)
        f=[[0]*(m+1) for _ in range(n+1)]
        # 行
        for i in range(1, m+1):
            f[0][i]=f[0][i-1]+1
        
        # 列
        for i in range(1, n+1):
            f[i][0]=f[i-1][0]+1
        
        for i in range(1,n+1):
            for j in range(1,m+1):
                if str1[i-1]==str2[j-1]:
                    f[i][j]=f[i-1][j-1]
                else:
                    f[i][j]=min(f[i-1][j-1],f[i-1][j],f[i][j-1])+1
        return f[-1][-1]