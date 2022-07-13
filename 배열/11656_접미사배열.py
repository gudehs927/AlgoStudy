a = input()
s = []
for i in range(len(a)):
    s.append(a[i:len(a)])
    s.sort()
for i in s:
    print(i)
