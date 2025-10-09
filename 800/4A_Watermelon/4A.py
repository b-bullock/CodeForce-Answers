w = int(input())

if w % 2 == 0:
    for i in range(2, w // 2 + 1, 2):
        if (w - i) % 2 == 0 and (w - i) > 0: print('YES')
        break
    else: print('NO')
else: print('NO')