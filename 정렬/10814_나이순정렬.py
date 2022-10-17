n = int(input())

year = []
for i in range(n):
    year.append(list(input().split()))

year.sort(key=lambda x: int(x[0]))
for i in range(n):
    print(year[i][0], year[i][1])
