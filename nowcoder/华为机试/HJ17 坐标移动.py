s=input()
ops=s.split(';')

x=0
y=0
for op in ops:
    if 1<len(op)<=3 and op[0] in ['A','S','D','W'] and op[1:].isdigit():
        fx=op[0]
        d=int(op[1:])
        if fx=='A':
            x-=d 
        elif fx=='S':
            y-=d 
        elif fx=='W':
            y+=d 
        else:
            x+=d 
print(f'{x},{y}')