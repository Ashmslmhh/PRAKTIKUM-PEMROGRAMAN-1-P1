#include <stdio.h>
#include <string.h>
int main() {
    char kode[50], pesan[50];
    scanf("%[^\n]%*c", &pesan);
    scanf("%[^\n]%*c", &kode);
    printf("\n");
    int bintang = 0;
    int pagar = 0;
    if (strlen(pesan) == strlen(kode)) {
        for(int i = 0; i < strlen(pesan); i++) {
            if (pesan[i] == ' ' && kode[i] == ' ') {
                printf(" "); }
            else if (pesan[i] == kode[i]) {
                printf("*");
                bintang++; }
            else if (pesan[i] != kode[i]) {
                printf("#");
                pagar++; }
            else {} }
        printf("\n* = %d \n", bintang);
        printf("# = %d \n", pagar);
        if (bintang >= pagar) { printf("Pesan Asli"); }
        else { printf("Pesan Palsu"); } }
    else { printf("Panjang kalimat berbeda, pesan palsu"); }
    return 0;
}