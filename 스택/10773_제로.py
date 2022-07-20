k = int(input())
a = []
t = 0
for i in range(k):
    t = int(input())
    if t == 0:
        a.pop()
    else:
        a.append(t)
print(sum(a))
