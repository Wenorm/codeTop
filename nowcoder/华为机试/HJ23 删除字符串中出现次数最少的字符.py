import collections


data=input()
dic=collections.defaultdict(int)
mincnt=25
for c in data:
    dic[c]+=1

for k in dic:
    mincnt=min(mincnt, dic[k])

res=''
for c in data:
    if dic[c] == mincnt:
        continue
    res += c
print(res)
