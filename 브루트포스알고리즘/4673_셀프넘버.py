num = set(range(1,10001))
r = set()
for i in range(1, 10001):
    for j in str(i):
        i += int(j)
    r.add(i)
num = num - r
for k in sorted(num):
    print(k)
