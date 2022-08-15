s = int(input())
n = 1
sum = 0
while True:
    sum += n
    if sum > s:
        print(n-1)
        break
    elif sum == s:
        print(n)
        break
    n += 1
