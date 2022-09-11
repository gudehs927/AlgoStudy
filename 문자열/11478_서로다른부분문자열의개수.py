s = input()
ans = set()

for i in range(len(s)):
    for j in range(i, len(s)):
        t = s[i:j+1]
        ans.add(t)

print(len(ans))
