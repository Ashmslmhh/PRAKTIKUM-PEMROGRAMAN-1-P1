while True : 
    print("Pilih program \n1. Penjumlahan \n2. Pengurangan \n3. Perkalian \n4. Pembagian \n5. Exit")
    x = int(input("Masukkan Pilihan : "))
    
    if 1 <= x <= 4 :
        y = float(input("Masukkan nilai pertama : "))
        z = float(input("Masukkan nilai kedua : "))
        
        if x == 1 :
            hasil_jumlah = y + z
            print(f"Hasil penjumlahan antara {y:.2f} dengan {z:.2f} adalah {hasil_jumlah:.2f}\n")
        elif x == 2 :
            hasil_kurang = y - z
            print(f"Hasil pengurangan antara {y:.2f} dengan {z:.2f} adalah {hasil_kurang:.2f}\n")
        elif x == 3 :
            hasil_kali = y * z
            print(f"Hasil perkalian antara {y:.2f} dengan {z:.2f} adalah {hasil_kali:.2f}\n")
        elif x == 4 :
            if z !=0 and y!=0 :
                hasil_bagi = y / z
                print(f"Hasil pembagian antara {y:.2f} dengan {z:.2f} adalah {hasil_bagi:.2f}\n")
            else :
                print("Error! = Pembagian tidak boleh 0!\n")

    elif x == 5 :
            print("Terimakasih, telah menggunakan kalkulator ASHMA SALIMAH \n")
            break

    else :
            print("Input anda salah, silahkan coba lagi\n")