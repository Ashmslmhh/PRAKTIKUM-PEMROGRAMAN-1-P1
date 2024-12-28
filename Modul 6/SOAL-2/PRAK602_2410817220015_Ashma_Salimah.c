#include <stdio.h>
int main() {
    int ruang;
    scanf("%d", &ruang);
    int zetsu[ruang], i;
    for(i = 0; i < ruang; i++) {
        scanf("%d", &zetsu[i]); }
    printf("\n");
    for(i = 0; i < ruang; i++) {
        int kelipatan = zetsu[i] * (i+1);
        printf("%d ", kelipatan); }
    return 0;
} 