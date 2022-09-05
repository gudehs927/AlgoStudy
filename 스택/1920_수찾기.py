import sys


def search(t, d):
    start = 0
    end = len(d) - 1
    while start <= end:
        mid = (start + end) // 2

        if d[mid] == t:
            return True
        elif d[mid] < t:
            start = mid + 1
        else:
            end = mid - 1


n = sys.stdin.readline()
nlist = list(map(int, sys.stdin.readline().split()))
m = sys.stdin.readline()
mlist = list(map(int, sys.stdin.readline().split()))
nlist.sort()
for i in mlist:
    if search(i, nlist):
        print('1')
    else:
        print('0')
