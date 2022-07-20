class Solution:
    def shiftGrid(self, grid: List[List[int]], k: int) -> List[List[int]]:
        arrs=[]
        col=len(grid[0])
        for i in range(len(grid)):
            arrs.extend(grid[i])
        
        while k>0:
            t=arrs.pop()
            k-=1
            arrs=[t]+arrs
        left=0
        ans=[]
        while left<len(arrs):
            right=left+col
            ans.append(arrs[left:right])
            left=right
        return ans