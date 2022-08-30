n, m = map(int, input().split())
dic = {}
for i in range(n):
    k, v = input().split()
    dic[k] = v

for g in range(m):
    t = input()
    print(dic[t])
