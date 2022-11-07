import sys
n = int(sys.stdin.readline())
k = []
for i in range(n):
    k.append(list(map(int, sys.stdin.readline().split())))
k.sort()
time = 0
for i in range(n):
    if time < k[i][0]:
        time = k[i][0]
    time += k[i][1]

print(time)
