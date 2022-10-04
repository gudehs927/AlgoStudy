n = int(input())


def sum(k):
    if k <= 1:
        return k
    return sum(k-1) + sum(k-2)


print(sum(n))
