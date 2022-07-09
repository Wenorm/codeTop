import re

chars = input()
chars = re.sub(r"([-+*/()])", r" \1 ", chars)  # 在符号之间加空格
tmp = chars.split()



tokens = []
p=0

while p < len(tmp):
    if tmp[p] == '-' and (p == 0 or tmp[p-1] == '('):
        tokens.append(''.join(tmp[p:p+2]))
        p += 1
    else:
        tokens.append(tmp[p])

    p += 1 

ops = []
vals = []

precedence = {'+':1, '-':1, '*':2, '/':2, '(':0}

def applyOp(v1, v2, op):
	if op == '+': return v1 + v2
	if op == '-': return v1 - v2
	if op == '*': return v1 * v2
	if op == '/': return v1 // v2

for t in tokens:
	if t.isdigit() or (t[0]=='-' and len(t)>1):
		vals.append(int(t))
	elif t == '(':
		ops.append(t)
	elif t == ')':
		while len(ops) > 0 and ops[-1] != '(':
			v2 = vals.pop()
			v1 = vals.pop()
			op = ops.pop()
			val = applyOp(v1, v2, op)
			vals.append(val)
		ops.pop()
	else:
		while len(ops) > 0 and precedence[ops[-1]] >= precedence[t]: # 优先级，先执行优先级更高的运算, 比如 1+2*3
			v2 = vals.pop()
			v1 = vals.pop()
			op = ops.pop()
			val = applyOp(v1, v2, op)
			vals.append(val)
		ops.append(t)


while len(ops) > 0:
	v2 = vals.pop()
	v1 = vals.pop()
	op = ops.pop()
	val = applyOp(v1, v2, op)
	vals.append(val)


print(vals[-1])
