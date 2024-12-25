baris, kolom = map(int,input("").split())
if baris != kolom :
    print("Jumlah tidak sama")
else :
    matriks1 = list(map(int,input("").split()))
    matriks2 = list(map(int,input("").split()))
    print("")
    for i in range (baris) :
        hasil = matriks1[i] * matriks2[i]
        print(f"{hasil}", end=" ")