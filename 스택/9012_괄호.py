import sys
x = int(sys.stdin.readline())
for i in range(x):
    k = sys.stdin.readline()
    ls = list(k)
    sum = 0

    for g in ls:
        if g == '(':
            sum += 1
        elif g == ')':
            sum -= 1
        if sum < 0:
            print('NO')
            break
    if sum > 0:
        print('NO')
    elif sum == 0:
        print('YES')
