input()

a=5
b=3
c=1
res=[]
for gong in range(101):
    if gong*a>100:
        break
    for mu in range(101):
        if gong*a+mu*b>100:
            break
        remaid=(100-gong*a-mu*b)*3
        if gong+mu+remaid == 100:
            res.append([gong, mu, remaid])

for r in res:
    print(f'{r[0]} {r[1]} {r[2]}')