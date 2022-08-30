x, y, w, h = map(int, input().split())
k = [x, y, w-x, h-y]
k.sort()
print(k[0])

