ruang = int(input(""))
zetsu = list(map(int,input("").split()))
print("")
for i in range (ruang) :
    kelipatan = zetsu[i] * (i+1)
    print(f"{kelipatan}", end=" ") 