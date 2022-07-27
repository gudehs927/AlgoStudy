n = int(input())
a = []
for i in range(n):
    tmp = list(map(int, input().split()))
    a.append(tmp)
a.sort()
for i in a:
    for j in i:
        print(j, end=' ')
    print()
