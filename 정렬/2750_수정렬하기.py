a = int(input())
t = []
for i in range(a):
    t.append(int(input()))
t.sort()
for i in range(a):
    print(t[i])
