m = int(input())
N = int(input())
sum = 0

for i in range(N):
    a, b = map(int, input().split())
    sum += a * b

if m == sum:
    print('Yes')
else:
    print('No')