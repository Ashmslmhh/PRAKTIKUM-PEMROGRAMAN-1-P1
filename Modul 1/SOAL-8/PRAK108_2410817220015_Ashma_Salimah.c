#include <stdio.h>
int main () {
    float putaran = 5;
    float jarak = 14;
    float phi = 3.14;
    float keliling = jarak / putaran;
    float r = keliling / (2 * phi);
    printf("Diketahui : \n");
    printf("Pak Dengklek mengelilingi taman = %.f Putaran \n", putaran);
    printf("Jarak tempuh Pak Dengklek = %.f Kilometer \n", jarak);
    printf("\n");
    printf("\n");
    printf("Jawaban : \n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer", r);
    return 0;
}