a = int(input())
b = int(input())
c = int(input())
all = list(str(a*b*c))
for i in range(10):
    print(all.count(str(i)))
