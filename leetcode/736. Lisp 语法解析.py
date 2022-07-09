import collections
class Solution:
    def evaluate(self, expression: str) -> int:
        i, n = 0, len(expression)
        scope = collections.defaultdict(list)

        def parseVar() -> str: 
            """解析变量"""
            nonlocal i
            i0 = i
            while i < n and expression[i] != ' ' and expression[i] != ')':
                i += 1
            return expression[i0:i]

        def parseInt() -> int: 
            '''解析整数'''
            nonlocal i
            sign, x = 1, 0
            if expression[i] == '-':
                sign = -1
                i += 1
            while i < n and expression[i].isdigit():
                x = x * 10 + int(expression[i])
                i += 1
            return sign * x

        
        def innerEvaluate() -> int:
            nonlocal i
            if expression[i] == '(':  # 非表达式，可能为：整数或变量
                i += 1  # 移除左括号
                if expression[i] == 'l':  # "let" 表达式
                    i += 4  # 移除 "let "
                    vars = []
                    while True:
                        if expression[i].islower():
                            var = parseVar()
                            if expression[i] == ')':
                                ret = scope[var][-1]  # let 表达式的最后一个 expr 表达式的值
                                break
                            vars.append(var)
                            i += 1  # 移除空格
                            scope[var].append(innerEvaluate())
                            i += 1  # 移除空格
                        else:
                            ret = innerEvaluate()  # let 表达式的最后一个 expr 表达式的值
                            break
                    for var in vars:
                        scope[var].pop()  # 清除当前作用域的变量
                elif expression[i] == 'a':  # "add" 表达式
                    i += 4  # 移除 "add "
                    e1 = innerEvaluate()
                    i += 1  # 移除空格
                    e2 = innerEvaluate()
                    ret = e1 + e2
                else:  # "mult" 表达式
                    i += 5  # 移除 "mult "
                    e1 = innerEvaluate()
                    i += 1  # 移除空格
                    e2 = innerEvaluate()
                    ret = e1 * e2
                i += 1  # 移除右括号
                return ret
            elif expression[i].islower():  # 变量
                var=parseVar()
                return scope[var][-1]
            else:
                return parseInt()  # 整数

        return innerEvaluate()