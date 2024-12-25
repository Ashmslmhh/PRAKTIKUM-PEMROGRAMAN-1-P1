pesan = input("")
kode = input("")
print(" ")
karakter = ""
bintang = 0
pagar = 0
if len(pesan) == len(kode) :
    for i in range (len(pesan)) :
        if pesan[i] == ' ' and kode[i] == ' ' :
            karakter += " "
        elif pesan[i] == kode[i] :
            karakter += "*"
            bintang += 1
        else :
            karakter += "#"
            pagar += 1
    print(karakter)
    print(f"* = {bintang}")
    print(f"# = {pagar}")
    if bintang >= pagar :
        print("Pesan Asli")
    else :
        print("Pesan Palsu")
else :
    print("Panjang kalimat berbeda, pesan palsu")