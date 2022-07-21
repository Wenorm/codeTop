# 给定一个数n，求1-n中校验数的个数
# 其中校验数定义如下：分为左右两部分，左边的二进制与后边二进制要完全相等，且左边要以1开头。
# 比如：1 1，100 100，101 101


# 解法1
def solve(n):
    if n>10**10 or n<0:
        return -1
    ans=0
    for i in range(1, n):
        length=0
        tmp=i
        while tmp:
            length+=1
            tmp=tmp>>1
        # 两数相叠
        a=i<<length
        num=a|i
        if num<=n:
            ans+=1
        else:
            break
    return ans


# 解法2
def tmp2int(n):
    res = bin(n)[2:]+bin(n)[2:]
    return int(res, 2)
def func(N):
    if N < 3:return -1
    res = 0
    tmp = 1
    while tmp2int(tmp)<=N:
        res += 1
        tmp += 1
    return res


if __name__ == '__main__':
    n=int(input())
    res=solve(n)
    print(res)



