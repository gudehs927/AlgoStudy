def k(a, b):
    while b != 0:
        t = a % b
        a = b
        b = t

    return a


n = int(input())
r = list(map(int, input().split()))

for i in range(1, n):
    g = k(r[0], r[i])
    print('{0}/{1}'.format(r[0] // g, r[i] // g))
