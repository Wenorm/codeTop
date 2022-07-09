x=int(input())
y=int(input())
z=int(input())
a=[]
b=[]
for i in range(x):
    a.append(list(map(int, input().split())))
for i in range(y):
    b.append(list(map(int, input().split())))

res=[[0]*z for i in range(x)]

b = list(zip(*b))

for i in range(x):
    for j in range(z):
        sums=[num1*num2 for num1, num2 in zip(a[i], b[j])]
        res[i][j]=sum(sums)

for line in res:
    print(' '.join(map(str, line)))