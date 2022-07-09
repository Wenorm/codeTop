class Solution:
    '''
    动态规划
    '''
    def longestPalindrome(self, s: str) -> str:
        n=len(s)
        dp=[[False]*n for _ in range(n)]
        for i in range(n):
            dp[i][i]=True
        maxlen=1
        start=0
        for L in range(2, n+1):
            for i in range(n):
                j=i+L-1
                if j>=n:
                    break
                if s[i]==s[j]:
                    if L<4:
                        dp[i][j]=True
                    else:
                        dp[i][j]=dp[i+1][j-1]
                else:
                    dp[i][j]=False
                if dp[i][j] and L>maxlen:
                    maxlen=L 
                    start=i 
        return s[start:start+maxlen]


class Solution:
    '''
    双向查找
    '''
    def longestPalindrome(self, s: str) -> str:
        if len(s)<2:
            return s
        maxlen=1
        start=0
        n=len(s)
        for i in range(1,n):
            # 1
            left=i-1
            right=i+1
            while left>=0 and right<n:
                if s[left]==s[right]:
                    if right-left+1>maxlen:
                        maxlen=right-left+1
                        start=left
                else:
                    break
                left-=1
                right+=1
            right=i
            left=i-1
            while left>=0 and right<n:
                if s[left]==s[right]:
                    if right-left+1>maxlen:
                        maxlen=right-left+1
                        start=left
                else:
                    break
                left-=1
                right+=1
        return s[start:start+maxlen]

# 马拉车
class Solution:
    def longestPalindrome(self, s: str) -> str:
        
        def expand(s, left, right):
            while left>=0 and right<len(s) and s[left]==s[right]:
                left-=1
                right+=1
            return (right-left-2)//2
        
        end=-1
        start=0
        s='#'+'#'.join(list(s))+'#'
        arm_len=[]
        right=-1
        mid=-1
        for i in range(len(s)):
            if i<=right:
                min_arm_len=min(arm_len[2*mid-i], right-i)  # 根据对称取之前算好的
                cur_arm_len=expand(s, i-min_arm_len, i+min_arm_len) # 不对称部分
            else:
                cur_arm_len=expand(s, i, i)
            arm_len.append(cur_arm_len)
            if i+cur_arm_len>right:  
                mid=i
                right=i+cur_arm_len
            if 2*cur_arm_len+1>end-start:
                start=i-cur_arm_len
                end=i+cur_arm_len
        return s[start+1:end+1:2]
                            