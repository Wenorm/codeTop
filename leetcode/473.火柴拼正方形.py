#
# @lc app=leetcode.cn id=473 lang=python3
#
# [473] 火柴拼正方形
#

# @lc code=start
from audioop import reverse


class Solution:
    def makesquare(self, matchsticks: List[int]) -> bool:
        totallen = sum(matchsticks)
        if totallen % 4:
            return False
        matchsticks.sort(reverse=True)
        edges = [0]*4
        def dfs(idx:int)->bool:
            if idx == len(matchsticks):
                return True
            for i in range(4):
                edges[i] += matchsticks[idx]
                if edges[i] <= totallen // 4 and dfs(idx+1):
                    return True
                edges[i] -= matchsticks[idx]
            return False
        return dfs(0)
# @lc code=end

