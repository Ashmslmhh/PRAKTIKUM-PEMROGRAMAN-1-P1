#include <stdio.h>
int main() {
    float nilai1, nilai2;
    printf("Masukkan Nilai Pertama : ");
    scanf("%f", &nilai1);
    printf("Masukkan Nilai Kedua : ");
    scanf("%f", &nilai2);
    float hasil = nilai1 + nilai2;
    if(nilai1==(int)nilai1) {
        printf("Hasil dari penjumlahan nilai pertama \"%d\" dan nilai kedua \"%.1f\" adalah \"%.2f\"", (int)nilai1, nilai2, hasil); }
    else { printf("Hasil dari penjumlahan nilai pertama \"%.2f\" dan nilai kedua \"%.1f\" adalah \"%.2f\"", nilai1, nilai2, hasil); }
    return 0;
}