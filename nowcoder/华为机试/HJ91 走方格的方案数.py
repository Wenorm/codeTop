def f(n,m):
    if n == 0 or m == 0:
        return 1
    else:
        return f(n-1,m) + f(n,m-1)
while True:
    try:
        n,m = map(int, input().split())
        print(f(n,m))
    except:
        break