nilai1 = float(input("Masukkan Nilai Pertama : "))
nilai2 = float(input("Masukkan Nilai Kedua : "))
hasil = nilai1 + nilai2
if nilai1.is_integer():
    print(f"Hasil dari penjumlahan nilai pertama \"{int(nilai1)}\" dan nilai kedua \"{nilai2:.1f}\" adalah \"{hasil:.2f}\"")
else : 
    print(f"Hasil dari penjumlahan nilai pertama \"{nilai1:.2f}\" dan nilai kedua \"{nilai2:.1f}\" adalah \"{hasil:.2f}\"")