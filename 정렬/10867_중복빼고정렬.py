n = int(input())
m = list(map(int, input().split()))
k = list(set(m))
k.sort()
for i in k:
    print(i, end=' ')
