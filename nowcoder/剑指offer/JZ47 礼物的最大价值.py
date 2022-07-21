#
# 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
#
# 
# @param grid int整型二维数组 
# @return int整型
#
class Solution:
    def maxValue(self , grid: List[List[int]]) -> int:
        # write code here
        for i in range(len(grid)):
            for j in range(len(grid[0])):
                if i==0 and j ==0:
                    continue
                if i==0:
                    grid[i][j]+=grid[i][j-1]
                elif j==0:
                    grid[i][j]+=grid[i-1][j]
                else :
                    grid[i][j]+=max(grid[i-1][j], grid[i][j-1])
        return grid[-1][-1]