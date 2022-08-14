import sys
n = int(sys.stdin.readline())
k = []
for i in range(n):
    c = sys.stdin.readline().split()

    if c[0] == 'push':
        k.append(c[1])

    elif c[0] == 'pop':
        if len(k) == 0:
            print(-1)
        else:
            print(k.pop())

    elif c[0] == 'size':
        print(len(k))

    elif c[0] == 'empty':
        if len(k) == 0:
            print(1)
        else:
            print(0)

    elif c[0] == 'top':
        if len(k) == 0:
            print(-1)
        else:
            print(k[-1])
