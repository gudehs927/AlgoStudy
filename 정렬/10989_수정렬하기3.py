import sys
n = int(sys.stdin.readline())
list = [0] * 10001
for i in range(n):
    list[int(sys.stdin.readline())] += 1

for i in range(10001):
    if list[i] != 0:
        for j in range(list[i]):
            print(i)
