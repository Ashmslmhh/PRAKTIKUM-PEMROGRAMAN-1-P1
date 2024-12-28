#include <stdio.h>
int main() {
    int a, k, h = 0;
    scanf("%d %d", &a, &k);
    for (int i = 1; i <= a; i++) {
        int b = 0;
        for (int j = i; j >= 1; j--) {
            b += j * k;
            printf("(%d * %d)", j, k);
            if (j > 1) { printf(" + "); } } 
        printf(" = %d \n", b);
        h += b; }
    printf("%d \n", h);
    return 0;
}