import sys
n = int(sys.stdin.readline())
k = []
for i in range(n):
    s = sys.stdin.readline().split()
    k.append(tuple([int(g) for g in s]))
k.sort(key=lambda x: (x[1], x[0]))
c = 0
l = -1
for i in k:
    if i[0] >= l:
        c += 1
        l = i[1]
print(c)
