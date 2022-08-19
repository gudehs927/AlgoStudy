t1, t2 = 0, 0
ls =[]
for i in range(9):
    ls.append(int(input()))
ls.sort()
for g in range(9):
    for j in range(g+1, 9):
        if sum(ls) - (ls[g] + ls[j]) == 100:
            t1 = ls[g]
            t2 = ls[j]

ls.remove(t1)
ls.remove(t2)

for i in ls:
    print(i)

