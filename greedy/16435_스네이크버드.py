n, l = map(int, input().split())
h = list(map(int, input().split()))
h.sort()
for i in h:
    if l >= i:
        l += 1

print(l)