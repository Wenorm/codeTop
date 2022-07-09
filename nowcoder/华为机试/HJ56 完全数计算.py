a = int(input())
res = 0
for i in range(1,a+1):
    s=1
    for j in range(2,int(i**0.5)):
        if i%j == 0:
            s+=j
            s+=i/j
    if s==i:
        res+=1
print(res)