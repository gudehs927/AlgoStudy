a, b = map(int, input().split())
l = list(map(int, input().split()))
k = list(map(int, input().split()))
l.extend(k)
l.sort()
for i in l:
    print(i, end=' ')
