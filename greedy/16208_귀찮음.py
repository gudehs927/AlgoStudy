n = int(input())
li = list(map(int, input().split()))
all = sum(li)
k = 0
sum = 0
for i in li:
    t = all - i
    k = t*i
    sum += k
    all = t

print(sum)