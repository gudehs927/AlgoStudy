import sys

for i in range(3):
    k = int(sys.stdin.readline())
    a = 0
    for f in range(k):
        s = int(sys.stdin.readline())
        a += s

    if a > 0:
        print('+')
    elif a < 0:
        print('-')
    else:
        print(0)



