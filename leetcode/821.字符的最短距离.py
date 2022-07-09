#
# @lc app=leetcode.cn id=821 lang=python3
#
# [821] 字符的最短距离
#

# @lc code=start
class Solution:
    def shortestToChar(self, s: str, c: str) -> List[int]:
        arr_list = []
        for i in range(len(s)):
            if s[i] == c:
                arr_list.append(i)
        ans = []
        for i in range(len(s)):
            minn = len(s)
            for num in arr_list:
                if abs(num-i) < minn:
                    minn = abs(num-i)
                else:
                    break
            ans.append(minn)
        return ans
# @lc code=end

