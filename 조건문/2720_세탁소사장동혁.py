a = int(input())
for i in range(a):
    t = int(input())
    q = t//25
    t = t-q*25
    d = t//10
    t = t-d*10
    n = t//5
    t = t-n*5
    print(q, d, n, t)