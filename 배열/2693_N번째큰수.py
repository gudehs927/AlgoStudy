N = int(input())
for j in range(N):
    A = [int(i) for i in input().split()]
    A.sort()
    print(A[-3])

