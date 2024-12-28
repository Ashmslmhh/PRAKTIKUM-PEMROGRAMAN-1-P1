#include <stdio.h>
int main() {
    float a = 4;
    float b = 8;
    float c = 3;
    printf("Variabel a bernilai %.f \n", a); 
    printf("Variabel b bernilai %.f \n", b); 
    printf("Variabel c bernilai %.f \n", c);
    float hasil = a * b / c;
    printf("Hasil dari a dikali b dibagi c adalah %f", hasil);
    return 0;
}