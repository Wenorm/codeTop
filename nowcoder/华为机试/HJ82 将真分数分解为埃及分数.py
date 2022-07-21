a=input().split('/')
fz=int(a[0])
c=[]
for i in range(fz):
    c.append(f'1/{a[1]}')
print('+'.join(c))