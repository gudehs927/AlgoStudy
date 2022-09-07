n, m = map(int,input().split())
tree = list(map(int, input().split()))
start, end = 1, max(tree)

while start <= end:
    sum = 0
    mid = (start + end) // 2
    for i in tree:
        if i >= mid:
            sum += i - mid
    if sum >= m:
        start = mid + 1
    else:
        end = mid - 1
print(end)
