
string=input()
cnt1=0
cnt2=0
cnt3=0
cnt4=0
for c in string:
    if c.isdigit():
        cnt3+=1
    elif c.isalpha():
        cnt1+=1
    elif c==' ':
        cnt2+=1
    else:
        cnt4+=1

print(cnt1)
print(cnt2)
print(cnt3)
print(cnt4)
