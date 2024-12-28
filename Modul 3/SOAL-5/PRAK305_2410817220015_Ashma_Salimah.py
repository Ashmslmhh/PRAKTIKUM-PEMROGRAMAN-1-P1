a = int(input(""))
hari = a // 86400
detik = a % 86400
jam = detik // 3600
detik %= 3600
menit = detik // 60
detik2 = detik % 60
if hari > 0 : print(f"{int(hari)} hari {jam:02}:{menit:02}:{detik2:02}")
else : print(f"{jam:02}:{menit:02}:{detik2:02}")