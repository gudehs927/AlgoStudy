n = int(input())
ls = []
for i in range(n):
    x, y = map(int, input().split())
    ls.append((x, y))

for k in ls:
    rank = 1
    for h in ls:
        if k[0] < h[0] and k[1] < h[1]:
            rank += 1
    print(rank, end=' ')
