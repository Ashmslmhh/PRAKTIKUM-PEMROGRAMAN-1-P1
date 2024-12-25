#include <stdio.h>
int main() {
    int x;
    float y, z;
    do {
        printf("Pilih program\n 1. Penjumlahan\n 2. Pengurangan\n 3. Perkalian\n 4. Pembagian\n 5. Exit\n");
        printf("Masukkan Pilihan : ");
        scanf("%d", &x);
        if (x>=1 && x<=4) { printf("Masukkan nilai pertama : ");
            scanf("%f", &y);
            printf("Masukkan nilai kedua : ");
            scanf("%f", &z); }
        if (x == 1) { float hasil_jumlah = y + z;
            printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f \n\n", y, z, hasil_jumlah); }
        else if (x == 2) { float hasil_kurang = y - z;
            printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f \n\n", y, z, hasil_kurang); }
        else if (x == 3) { float hasil_kali = y * z;
            printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f \n\n", y, z, hasil_kali); }
        else if (x == 4) { float hasil_bagi = y / z;
            if (z != 0) { printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f \n\n", y, z, hasil_bagi);}
            else {printf("Error! = Pembagian tidak boleh 0!");} }
        else if (x == 5) { printf("Terimakasih, telah menggunakan kalkulator ASHMA SALIMAH \n\n"); }
        else { printf("Input anda salah, silahkan coba lagi \n\n"); }
    } while (x!=5);
    return 0;
}