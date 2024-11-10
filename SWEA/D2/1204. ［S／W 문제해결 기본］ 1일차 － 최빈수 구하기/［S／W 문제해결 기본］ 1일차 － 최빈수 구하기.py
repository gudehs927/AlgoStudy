T = int(input())
for _ in range(T):
    N = int(input())
    number = list(map(int, input().split()))
    data = [0] * 1001

    for i in number:
        data[i] += 1

    maxnum = max(data)
    result = []
    for i in range(len(data)):
        if data[i] == maxnum :
            result.append(i)


    print(f'#{N} {max(result)}')