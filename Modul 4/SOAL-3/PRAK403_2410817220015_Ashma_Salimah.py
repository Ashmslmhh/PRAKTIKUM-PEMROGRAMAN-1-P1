a, b = map(int,input().split())
x, y = a, b
if a <= b :
    while a<=b :
        print(f"{a} {b}", end=' ')
        if a <= b :
            print(" - ", end=' ')
        a += 1
        b -= 1
    while a <= y :
        print(f"{a} {b}", end=' ')
        if a < y:
            print(" - ", end=' ')
        a += 1
        b -= 1
else :
    while a>=b:
        print(f"{a} {b}", end=' ')
        if a >= b :
            print("-", end=' ')
        a -= 1
        b += 1
    while a >= y :
        print(f"{a} {b}", end=' ')
        if a > y :
            print("-", end=' ')
        a -= 1
        b += 1