n, m = map(int, input().split())
if n == 0:
    print(0)
else:
    d = list(map(int, input().split()))

    w = 0
    c = 1
    for i in d:
        w += i
        if w > m:
            c += 1
            w = i
    print(c)
