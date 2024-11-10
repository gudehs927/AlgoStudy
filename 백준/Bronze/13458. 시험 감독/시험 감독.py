N = int(input())
A = list(map(int, input().split()))
B, C = map(int, input().split())
sum = 0
for i in range(N):
    A[i] -= B
    sum += 1
    if A[i] > 0:
        if A[i] % C == 0:
            sum += (A[i] // C)
        else:
            sum += (A[i] // C)+1


print(sum)
