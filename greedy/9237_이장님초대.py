n = int(input())
Max = 0
i = 2
list = list(map(int, input().split()))

list.sort(reverse=True)

for k in list:
    if Max < k + i:
        Max = k + i
    i += 1
print(Max)
