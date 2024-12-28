#include <stdio.h>
int main() {
    int a = 4;
    int b = 8;
    int c = 3;
    int hasil1 = a == b;
    int hasil2 = b >= c;
    int hasil3 = a != c;
    printf("Variabel a bernilai %d \n", a); 
    printf("Variabel b bernilai %d \n", b); 
    printf("Variabel c bernilai %d \n", c);
    printf("Apakah a sama dengan b ? jawabannya adalah %d \n", hasil1);
    printf("Apakah b lebih besar dari c ? jawabannya adalah %d \n", hasil2);
    printf("Apakah a tidak sama dengan c ? jawabannya adalah %d \n", hasil3);
    return 0;
}