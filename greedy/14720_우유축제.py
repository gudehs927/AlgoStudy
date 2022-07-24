n = int(input())
k = list(map(int, input().split()))
c = 0
for i in range(n):
    if k[i] == c % 3:
        c = c + 1
print(c)
