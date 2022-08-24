n = int(input())
ls = []
k = []
c = 1
p = 0
for i in range(n):
    t = int(input())
    while c <= t:
        ls.append(c)
        c += 1
        k.append('+')
    if t == ls[-1]:
        k.append('-')
        ls.pop(-1)
    else:
        p = 1
        break
if p == 1:
    print("NO")
else:
    for i in k:
        print(i)








