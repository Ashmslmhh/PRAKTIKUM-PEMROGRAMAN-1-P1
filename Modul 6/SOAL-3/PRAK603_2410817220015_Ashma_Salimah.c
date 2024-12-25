#include <stdio.h>
int main() {
    int baris, kolom;
    scanf("%d %d", &baris, &kolom);
    if (baris != kolom) {
        printf("Jumlah tidak sama"); }
    else {
        int matriks1[baris], matriks2[kolom];
        for(int i = 0; i < baris; i++) {
                scanf("%d", &matriks1[i]); } 
        for(int i = 0; i < kolom; i++) {
                scanf("%d", &matriks2[i]); }
        printf("\n");
        for(int i = 0; i < baris; i++) {
            int hasil = matriks1[i] * matriks2[i];
            printf("%d ", hasil); } }
    return 0;
}