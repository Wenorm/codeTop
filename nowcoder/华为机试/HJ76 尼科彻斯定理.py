m=int(input())

a=m**2-m+1
res=[]
for i in range(m):
    res.append(str(a))
    a+=2
print('+'.join(res))