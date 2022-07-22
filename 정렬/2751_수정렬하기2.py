import sys
a = int(sys.stdin.readline())
t = []
for i in range(a):
    k = int(sys.stdin.readline())
    t.append(k)

t.sort()

for i in t:
    print(i)
