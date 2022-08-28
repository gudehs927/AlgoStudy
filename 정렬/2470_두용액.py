n = int(input())
m = list(map(int, input().split()))
m.sort()
start = 0
end = n-1
min = m[start] + m[end]
l = start
r = end
while start < end:
    t = m[start] + m[end]
    if abs(min) > abs(t):
        min = t
        l = start
        r = end
        if min == 0:
            break
    if t < 0:
        start += 1
    elif t > 0:
        end -= 1

print(m[l], m[r])






