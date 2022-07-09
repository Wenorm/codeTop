n=int(input())
arr=input().split()

res=[]
def dfs(pos, path, stack):
    if pos==len(arr) and len(path)==len(arr) and len(stack)==0:
        res.append(' '.join(path[:]))
        return
    # 进
    if pos<len(arr):
        dfs(pos+1, path, stack+[arr[pos]])
    # 出
    if len(stack)>0:
        t = stack.pop()
        dfs(pos, path+[t], stack)
dfs(0, [], [])
res=sorted(res)
for r in res:
    print(r)