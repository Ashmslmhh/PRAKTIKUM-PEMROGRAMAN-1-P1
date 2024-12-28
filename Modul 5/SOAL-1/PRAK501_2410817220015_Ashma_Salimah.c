#include <stdio.h>
int MaxBilangan(int a, int b, int c, int d) {
    int maxbil = a;
    if (b > maxbil) maxbil = b;
    if (c > maxbil) maxbil = c;
    if (d > maxbil) maxbil = d;
    return maxbil; }
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d); 
    int hasil = MaxBilangan(a, b, c, d); 
    printf("%d", hasil);
    return 0; 
}