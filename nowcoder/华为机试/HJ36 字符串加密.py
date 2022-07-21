key=input()
text=input()

newkey=''
for c in key:
    if c not in newkey:
        newkey+=c

for c in range(0, 27):
    if chr(c+ord('a')) not in newkey:
        newkey+=chr(c+ord('a'))

new_text=''
for c in text:
    new_text+=newkey[ord(c)-ord('a')]
print(new_text)