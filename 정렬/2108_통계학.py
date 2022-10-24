from collections import Counter
import sys

n = int(sys.stdin.readline())
li = [int(sys.stdin.readline()) for i in range(n)]
li.sort()
print(round(sum(li)/n))
print(li[(n-1)//2])
cnt = Counter(li).most_common(2)
if n > 1:
    if cnt[0][1] == cnt[1][1]:
        print(cnt[1][0])
    else:
        print(cnt[0][0])
else:
    print(cnt[0][0])
print(li[-1] - li[0])
