import sys
a, b = map(int, input().split())
n = []
for i in range(a):
    n.append(sys.stdin.readline().strip())
m = []
for i in range(b):
    m.append(sys.stdin.readline().strip())
k = list(set(n) & set(m))
print(len(k))
k.sort()
for i in k:
    print(i)
