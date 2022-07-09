#
# @lc app=leetcode.cn id=868 lang=python3
#
# [868] 二进制间距
#

# @lc code=start
import math
class Solution:
    def binaryGap(self, n: int) -> int:
        if n == int(math.sqrt(n)) * int(math.sqrt(n)):
            return 0
        
# @lc code=end

