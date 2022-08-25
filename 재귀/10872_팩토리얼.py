def f(n):
    if n == 0:
        return 1
    else:
        result = n * f(n - 1)
        return result


k = int(input())
print(f(k))
