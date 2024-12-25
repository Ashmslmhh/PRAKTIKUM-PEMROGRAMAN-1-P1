ordo = int(input(""))
matriksA = [[0] * ordo for _ in range(ordo)]
matriksB = [[0] * ordo for _ in range(ordo)]
hasil = [[0] * ordo for _ in range(ordo)]
print("Matriks A")
for i in range (ordo) :
    matriksA[i] = list(map(int,input("").split()))
print("Matriks B")
for i in range (ordo) :
    matriksB[i] = list(map(int,input("").split()))
for i in range (ordo) :
    for j in range (ordo) :
        hasil[i][j] = 0
        for k in range (ordo) :
            hasil[i][j] += matriksA[i][k] * matriksB[k][j]
print("\nMatriks AXB")
for i in range (ordo) :
    for j in range (ordo) :
        print(hasil[i][j], end=" ")
    print("")