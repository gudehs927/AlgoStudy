t = int(input())
for _ in range(t):
    n, m = map(int, input().split())
    root = [[0 for _ in range(m+1)]for _ in range(n+1)]
    for i in range(1, n+1):
        for j in range(1, m+1):
            if i == 1:
                root[i][j] = j
                continue
            if i == j:
                root[i][j] = 1
            else:
                if j > i:
                    root[i][j] = root[i][j-1] + root[i-1][j-1]
    print(root[n][m])


