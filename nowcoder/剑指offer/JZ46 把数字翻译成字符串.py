class Solution:
    def solve(self , nums):
        # write code here
        if not nums:
            return 0
        if nums == '0':
            return 0
        n = len(nums)
        dp = [0] * (n + 1)
        dp[0] = 1
        dp[1] = 1
        for i in range(2, n + 1):
            if nums[i - 2:i] == '10' or nums[i - 2:i] == '20':
                dp[i] = dp[i-2]
            elif '10' <= nums[i-2:i] <= '26':
                dp[i] = dp[i-1] + dp[i-2]                
            elif nums[i - 1] != '0':
                dp[i] = dp[i-1]
            else:
                dp[i] = 0
        return dp[-1]