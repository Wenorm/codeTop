# 数字 n 代表生成括号的对数，请你设计一个函数，用于能够生成所有可能的并且 有效的 括号组合。

# 题解： 先加入左括号，再加入右括号，如果左括号的数量大于右括号，则加入左括号，否则加入右括号。

class Solution:
    def generateParenthesis(self, n: int) -> List[str]:

        res=[]
        
        def dfs(s, left, right):
            if left==0 and right==0:
                res.append(s[:])
                return

            if left>0:
                dfs(s+"(",left-1,right)
            if left<right:
                dfs(s+")",left, right-1)
        dfs("",n,n)
        return res

        