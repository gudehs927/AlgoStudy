k, n, m = map(int, input().split())
all = k * n - m
if all < 0:
    print(0)
else:
    print(all)
