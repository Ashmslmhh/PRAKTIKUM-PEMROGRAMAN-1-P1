#include <stdio.h>
#include <math.h>
int main () {
    float alas = 5;
    float tinggi = 12;
    float sisia = tinggi;
    float sisib = sqrt((alas * alas) + (tinggi * tinggi));
    float sisic = alas;
    float keliling = 30;
    float luas = 30;
    printf("Diketahui : \n");
    printf("Alas = %.f cm \n", alas);
    printf("Tinggi = %.f cm \n", tinggi);
    printf("\n");
    printf("\n");
    printf("Jawab : \n");
    printf("Sisi A = %.f cm \n", sisia);
    printf("Sisi B = %.f cm \n", sisib);
    printf("Sisi C = %.f cm \n", sisic);
    printf("Keliling = %.f cm \n", keliling);
    printf("Luas = %.f cm", luas);
    return 0;
}