baris, kolom = map(int,input("").split())
angka = list(map(int,input("").split()))
matriks = []
for i in range (baris) :
    matriks.append(angka[i * kolom:(i + 1) * kolom])
print("")
for i in range (baris) :
    for j in range (kolom) :
        print(f"{matriks[i][j]}", end=" ")
    print("")