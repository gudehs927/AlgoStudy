n = int(input())
six = 666
c = 0
while True:
    if '666' in str(six):
        c += 1
    if c == n:
        print(six)
        break
    six += 1

