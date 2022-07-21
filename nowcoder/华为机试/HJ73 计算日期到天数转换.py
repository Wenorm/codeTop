# 根据输入的日期，计算是这一年的第几天。
year, month, day = map(int, input().split())

def isLeapYear(year):
    if (year % 4 == 0 and year % 100 != 0) or year % 400 == 0:
        return True
    else:
        return False

ans=0

for i in range(1, month):
    if i == 1 or i == 3 or i == 5 or i == 7 or i == 8 or i == 10 or i == 12:
        ans += 31
    elif i == 4 or i == 6 or i == 9 or i == 11:
        ans += 30
    elif i == 2:
        if isLeapYear(year):
            ans += 29
        else:
            ans += 28

print(ans+day)

