import math
r_tinggi = []
while True :
    bil = input("")
    if not bil :
        break
    r_tinggi.extend(bil.split())
r_tinggi = list(map(float, r_tinggi))
jari, tinggi = r_tinggi
volume = 22 * jari * jari * tinggi / 7
luas = 2 * 22 * jari * (jari + tinggi) / 7
keliling = 2 * 22 * jari / 7
print(f"Volume = {volume:.2f}")
print(f"Luas = {luas:.2f}")
print(f"Keliling = {keliling:.2f}")
