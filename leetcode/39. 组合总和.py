# 给你一个 无重复元素 的整数数组 candidates 和一个目标整数 target ，找出 candidates 中可以使数字和为目标数 target 的 所有 不同组合 ，并以列表形式返回。你可以按 任意顺序 返回这些组合。

# candidates 中的 同一个 数字可以 无限制重复被选取 。如果至少一个数字的被选数量不同，则两种组合是不同的。 

# 对于给定的输入，保证和为 target 的不同组合数少于 150 个。

class Solution:
    def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:

        res=[]
        def dfs(path, sum, start):

            if sum==target:
                res.append(path)
                return
            
            if sum>target:
                return
            
            for i in range(start, len(candidates)):
                dfs(path+[candidates[i]], sum+candidates[i], i)

        dfs([],0,0)
        return res
