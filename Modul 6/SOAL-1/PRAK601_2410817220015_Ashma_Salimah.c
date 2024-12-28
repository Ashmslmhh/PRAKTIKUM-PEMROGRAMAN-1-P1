#include <stdio.h>
int main() {
    int baris, kolom;
    scanf("%d %d", &baris, &kolom);
    int matriks[baris][kolom], i, j;
    for(i = 0; i < baris; i++) {
        for(j = 0; j < kolom; j++) {
            scanf("%d", &matriks[i][j]); } }
    printf("\n");
    for(i = 0; i < baris; i++) {
        for(j = 0; j < kolom; j++) {
            printf("%d ", matriks[i][j]); } 
        printf("\n"); }
    return 0;
}