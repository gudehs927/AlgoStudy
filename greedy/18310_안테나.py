n = int(input())
v = list(map(int, input().split()))
v.sort()
print(v[(n-1)//2])
