import sys

n, m = map(int, input().split())
k = []
for i in range(n):
    x = int(sys.stdin.readline())
    k.append(x)
k.sort()

start = 1
end = k[-1] - k[0]
root = 0
while start <= end:
    mid = (start + end)//2
    sp = k[0]
    count = 1

    for i in range(1, n):
        if k[i] >= sp + mid:
            count += 1
            sp = k[i]
    if count >= m:
        start = mid + 1
        root = mid
    else:
        end = mid - 1

print(root)
