huruf = []
while True :
    bil = input("")
    if not bil :
        break
    huruf.extend(bil.split())
huruf = list(map(float, huruf))
a,b,i,j,x,y = huruf
hasil = (((a - b)* i) / j) - (x + y)
print(f"{hasil:.3f}")