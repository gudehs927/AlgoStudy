li = []
N, K = map(int, input().split())
cnt = 0
for i in range(1, N + 1):
    if N % i == 0:
        li.append(i)
    cnt += 1

if K > len(li):
    print(0)
else:
    print(li[K-1])
