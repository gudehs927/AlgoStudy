n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
a.sort()
b.sort(reverse=True)
s = 0
c = 0
for i in range(n):
    c = a[i] * b[i]
    s += c
print(s)
