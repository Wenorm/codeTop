# 输入一个字符串，打印出该字符串中字符的所有排列。

#  

# 你可以以任意顺序返回这个字符串数组，但里面不能有重复元素。

#  

# 示例:

# 输入：s = "abc"
# 输出：["abc","acb","bac","bca","cab","cba"]
#  

# 限制：

# 1 <= s 的长度 <= 8

# 来源：力扣（LeetCode）
# 链接：https://leetcode.cn/problems/zi-fu-chuan-de-pai-lie-lcof
# 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

class Solution:
    def permutation(self, s: str) -> List[str]:
        res=[]
        s=sorted(s)
        vis=[False]*len(s)
        def dfs(path):
            if len(path)==len(s):
                res.append(''.join(path[:]))
            for i in range(len(s)):
                if vis[i] or (i>0 and not vis[i-1] and s[i]==s[i-1]):
                    continue
                vis[i]=True
                path.append(s[i])
                dfs(path)
                vis[i]=False
                path.pop()
        dfs([])
        return res