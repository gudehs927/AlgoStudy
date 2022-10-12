import sys
n, m = map(int, sys.stdin.readline().split())
s = set([sys.stdin.readline() for i in range(n)])
c = 0
for i in range(m):
    string = sys.stdin.readline()
    if string in s:
        c += 1

print(c)
