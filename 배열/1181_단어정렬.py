import sys
a = int(input())
v = []
for i in range(a):
    v.append(sys.stdin.readline())
k = set(v)
v = list(k)
v.sort()
v.sort(key=len)
for i in v:
    print(i, end='')
