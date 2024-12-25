a = int(input(""))
for y in range (1, a+1) :
    if y%2!=0 : print(y , end=" ")
print(" ")
for x in range (a,0, -1) :
    if x%2==0 : print(x , end=" ")