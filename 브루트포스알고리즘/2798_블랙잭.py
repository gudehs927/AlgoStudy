n, m= map(int, input().split())
list = list(map(int, input().split()))
list.sort()
sum = 0
for i in range(n):
    for j in range(i+1, n):
        for k in range(j+1, n):
            if list[i] + list[j] + list[k] > m:
                continue
            else:
                sum = max(sum, list[i] + list[j] + list[k])

print(sum)
