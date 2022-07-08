a = int(input())
for i in range(a):
    b = input()
    t = 0
    k = 0
    for j in range(len(b)):
        if b[j] == 'O':
            t += 1
            k += t
        if b[j] == 'X':
            t = 0
    print(k)




