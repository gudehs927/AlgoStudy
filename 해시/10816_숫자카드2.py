import sys
from collections import Counter

a = int(sys.stdin.readline())
n = list(map(int, input().split()))
b = int(sys.stdin.readline())
m = list(map(int, input().split()))

c = Counter(n)
for i in range(len(m)):
    if m[i] in c:
        print(c[m[i]], end=' ')
    else:
        print(0, end=' ')
