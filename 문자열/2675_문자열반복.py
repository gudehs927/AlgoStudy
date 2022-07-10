a = int(input())
for i in range(a):
    t, s = input().split()
    for g in range(len(s)):
        print(int(t)*s[g], end='')
    print()
