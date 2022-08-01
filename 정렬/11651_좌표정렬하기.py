import sys
n = int(sys.stdin.readline())
k = []
for i in range(n):
    s = sys.stdin.readline().split()
    k.append(tuple([int(g) for g in s]))
k.sort(key=lambda x: (x[1], x[0]))
for i in k:
    print(i[0], i[1])
