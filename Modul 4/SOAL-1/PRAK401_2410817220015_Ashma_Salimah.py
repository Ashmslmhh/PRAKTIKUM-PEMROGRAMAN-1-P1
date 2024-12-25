a, b = (input().split())
a = int(a)
for x in range(1, 51) :
    if x%a==0 : print(b, end=' ')
    else : print(x, end=' ')