import sys
n = int(sys.stdin.readline())
k = {}
for i in range(n):
    f = sys.stdin.readline().strip('\n')
    if f not in k:
        k[f] = 1
    else:
        k[f] += 1
l = []
m = max(k.values())

for i in k:
    if m == k[i]:
        l.append(i)
l.sort()
print(l[0])
