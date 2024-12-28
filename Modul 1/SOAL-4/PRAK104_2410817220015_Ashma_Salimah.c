#include <stdio.h>
int main () {
    float a = 400000;
    float b = 350000;
    float c = 13;
    float d = 21;
    float hasil1 = a * (1 - c / 100);
    float hasil2 = b * (1 - d / 100);
    printf("Harga sepatu A adalah %.f \n", a); 
    printf("Harga sepatu B adalah %.f \n", b); 
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %.f \n", hasil1);
    printf("Sepatu A mendapat diskon 21%% sehingga harganya menjadi %.f \n", hasil2);
    return 0;
}