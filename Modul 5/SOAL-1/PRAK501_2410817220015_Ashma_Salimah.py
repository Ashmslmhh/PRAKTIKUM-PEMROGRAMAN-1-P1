def MaxBilangan(a, b, c, d) :
    maxbil = a
    if b > maxbil : maxbil = b
    if c > maxbil : maxbil = c
    if d > maxbil : maxbil = d
    return maxbil
a, b, c, d = map(int,input("").split())
hasil = MaxBilangan(a, b, c, d)
print(f"{hasil}")