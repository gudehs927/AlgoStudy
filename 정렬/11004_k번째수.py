import sys
n, m = map(int, sys.stdin.readline().split())
k = list(map(int, sys.stdin.readline().split()))
k.sort()
print(k[m-1])
