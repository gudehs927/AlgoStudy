a, b = input().split()
Min = int(a.replace('6', '5')) + int(b.replace('6', '5'))
Max = int(a.replace('5', '6')) + int(b.replace('5', '6'))
print(Min, Max)
