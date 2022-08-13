n = int(input())
k = {}
for i in range(n):
    f = int(input())
    if f in k:
        k[f] += 1
    else:
        k[f] = 1

g = sorted(k.items(), key=lambda x: (-x[1], x[0]))
print(g[0][0])

