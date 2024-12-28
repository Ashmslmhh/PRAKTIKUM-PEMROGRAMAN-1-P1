def reverse (x) :
    rev = 0
    while x != 0 :
        rev = rev * 10 + x % 10
        x = x // 10
    return rev
A, B = map(int,input("").split())
A=reverse(A)
B=reverse(B) 
C = A+B
print(f"{reverse(C)}")