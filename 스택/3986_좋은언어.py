import sys
x = int(sys.stdin.readline())
sum = 0
for i in range(x):
    k = input()
    ls = list(k)
    t = []
    for g in ls:
        if not t:
            t.append(g)
        elif t[-1] == g:
            t.pop()
        else:
            t.append(g)
    if len(t) == 0:
        sum += 1
print(sum)
