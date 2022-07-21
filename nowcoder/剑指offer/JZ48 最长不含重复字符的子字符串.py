class Solution:
    def lengthOfLongestSubstring(self , s: str) -> int:
        se=set()
        ans=1
        left=0
        right=0
        while right<len(s):
            while s[right] in se:
                se.remove(s[left])
                left+=1
            se.add(s[right])
            right+=1
            ans=max(ans, right-left)
        return ans