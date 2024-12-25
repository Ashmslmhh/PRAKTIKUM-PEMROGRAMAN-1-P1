import math
a_b = []
while True :
    bil = input("")
    if not bil :
        break
    a_b.extend(bil.split())
a_b = list(map(float, a_b))
a, b = a_b
c = math.sqrt((b * b) - (a * a))
keliling = a + b + c
luas = c * a / 2
print(f"Alas = {c:.0f} cm")
print(f"Tinggi = {a:.0f} cm")
print(f"Keliling = {keliling:.0f} cm")
print(f"Luas = {luas:.0f} cm^2")