a, b, c, d = map(int, input().split())
l = list(map(int, input().split()))
for i in l:
    k = 0
    if 0 < i %(a+b) <= a:
        k += 1
    if 0 < i %(c+d) <= c:
        k +=1
    print(k)


