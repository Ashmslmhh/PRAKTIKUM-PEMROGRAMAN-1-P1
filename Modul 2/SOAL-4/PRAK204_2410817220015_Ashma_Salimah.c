#include <stdio.h>
#include <math.h>
int main() {
    float jari, tinggi, volume, luas, keliling;
    scanf("%f", &jari);
    scanf("%f", &tinggi);
    volume = 22 * jari * jari * tinggi / 7;
    luas = 2 * 22 * jari * (jari + tinggi) / 7;
    keliling = 2 * 22 * jari / 7;
    printf("Volume = %.2f \n", volume);
    printf("Luas = %.2f \n", luas);
    printf("Keliling = %.2f \n", keliling);
    return 0;
}