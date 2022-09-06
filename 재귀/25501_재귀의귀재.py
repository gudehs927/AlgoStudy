import sys


def recursion(s, l, r, t):
    if l >= r:
        return 1, t
    elif s[l] != s[r]:
        return 0, t
    else:
        return recursion(s, l+1, r-1, t+1)


def isPalindrome(s):
    return recursion(s, 0, len(s)-1, 1)


n = int(input())
li = []
for i in range(n):
    str = sys.stdin.readline().rstrip()
    li = list(str)
    for g in isPalindrome(li):
        print(g, end=' ')
    print()



