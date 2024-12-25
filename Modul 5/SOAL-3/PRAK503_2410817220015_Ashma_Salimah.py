def maksimal (a, b) :
    maxbil = a
    if b > maxbil : maxbil = b
    return maxbil
def minimal (a, b) :
    minbil = a
    if b < minbil : minbil = b
    return minbil
batas = 0
maks = -100000
minim = 100000
bilangan = int(input(""))
a = list(map(int, input("").split()))
while batas < bilangan : 
    nilai = a [batas]
    maks = maksimal(maks, nilai)
    minim = minimal(minim, nilai)
    batas += 1
print(f"{maks} {minim}", end="")