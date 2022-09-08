n, m = map(int,input().split())
lan = []
for i in range(n):
    lan.append(int(input()))

start, end = 1, max(lan)

while start <= end:
    sum = 0
    mid = (start + end) // 2
    for i in lan:
        sum += i//mid

    if sum >= m:
        start = mid + 1
    else:
        end = mid - 1
print(end)
