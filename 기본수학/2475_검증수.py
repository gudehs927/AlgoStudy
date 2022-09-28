import sys

n, m = map(int, sys.stdin.readline().split())
k = list(map(int, sys.stdin.readline().split()))
tt = [0]

sum = 0
for i in k:
    sum += i
    tt.append(sum)

for g in range(m):
    a, b = map(int, sys.stdin.readline().split())
    print(tt[b] - tt[a-1])
