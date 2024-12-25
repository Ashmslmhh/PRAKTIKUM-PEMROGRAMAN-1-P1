a, k = input().split()
a = int(a)
k = int(k)
h = 0
for x in range (1, a + 1) :
    b = 0
    for y in range (1, x + 1) :
        b += y * k 
        print(f"({y} * {k})", end=' ')
        if y < x :
            print(" + ", end=' ')
    h += b
    print(f" = {b}")
print(f"{h}")