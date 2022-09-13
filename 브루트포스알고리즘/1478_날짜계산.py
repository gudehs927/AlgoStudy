E, S, M = map(int, input().split())

c, e, s, m = 1, 1, 1, 1
while True:
    if E == e and S == s and M == m:
        print(c)
        break
    e += 1
    s += 1
    m += 1
    c += 1
    if e == 16:
        e -= 15
    if s == 29:
        s -= 28
    if m == 20:
        m -= 19
