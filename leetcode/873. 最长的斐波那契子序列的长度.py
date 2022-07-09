class Solution:
    def lenLongestFibSubseq(self, arr: List[int]) -> int:
        dic={}
        for i, num in enumerate(arr):
            dic[num]=i
        n=len(arr)
        f=[[0]*n for _ in range(n)]
        res=0
        for i in range(1, n):
            for j in range(i-1, -1, -1):
                tmp=arr[i]-arr[j]
                if tmp not in dic:
                    continue
                if tmp >= arr[j]:
                    break
                f[i][j]=max(3, f[j][dic[tmp]]+1)
                res=max(f[i][j],res)
        return res
