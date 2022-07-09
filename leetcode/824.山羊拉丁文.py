#
# @lc app=leetcode.cn id=824 lang=python3
#
# [824] 山羊拉丁文
#

# @lc code=start
class Solution:
    def toGoatLatin(self, sentence: str) -> str:
        sentence = sentence.split()
        ans = []
        for i, word in enumerate(sentence):
            if word[0] in ['a','e','i','o','u','A','E','I','O','U']:
                word += 'ma'
            else:
                word = word[1:]+word[0]+'ma'
            word += 'a'*(i+1)
            ans.append(word)
        return ' '.join(ans)

# @lc code=end

