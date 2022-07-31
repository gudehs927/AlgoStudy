import sys
n = int(sys.stdin.readline())
h = []
Max = 0
t = 0
k = 0
for i in range(n):
    h.append(int(sys.stdin.readline()))
for i in range(n):
    k = h.pop()
    if Max < k:
        Max = k
        t += 1
print(t)
