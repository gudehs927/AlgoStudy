import sys
n, m = map(int, sys.stdin.readline().split())
l = {}
L = {}
for i in range(1, n+1):
    t = sys.stdin.readline().strip('\n')
    l[t] = i
    L[i] = t
for i in range(m):
    k = sys.stdin.readline().strip('\n')
    if k.isdigit():
        print(L[int(k)])
    else:
        print(l[k])
