class Solution:
    def calculate(self, s):
        from collections import deque
        def recur(s):
            stack = []
            sign = '+'
            num = 0
            while len(s) > 0:
                c = s.pop(0)
                if c.isdigit():
                    num = 10 * num + int(c)
                if c == '(':
                    num = recur(s)  # 递归运算括号中的结果
                # s为空时处理最后一个num和sign
                if c in '+-)' or not s:
                    if sign == '+':
                        stack.append(num)
                    elif sign == '-':
                        stack.append(-num)
                    num = 0
                    sign = c
                if c == ')':
                    break
            return sum(stack)
        return recur(list(s))