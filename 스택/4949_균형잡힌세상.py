while True:
    s = input()
    if s == '.':
        break
    ls = []
    p = 0
    for i in s:
        if i == '(' or i == '[':
            ls.append(i)
        elif i == ')':
            if not ls or ls[-1] == '[':
                p = 1
                break
            elif ls[-1] == '(':
                ls.pop()
        elif i == ']':
            if not ls or ls[-1] == '(':
                p = 1
                break
            elif ls[-1] == '[':
                ls.pop()

    if p == 0 and not ls:
        print('yes')
    else:
        print('no')