#include <stdio.h>
int main () {
    int nilai;
    scanf ("%d", &nilai);
    if (nilai >= 80 && nilai <= 100) {printf("A");}
    else if (nilai >= 70 && nilai <= 79) {printf("B");}
    else if (nilai >= 60 && nilai <= 69) {printf("C");}
    else if (nilai >= 50 && nilai <= 59) {printf("D");}
    else if (nilai <= 49 && nilai >= 0) {printf("E");}
    else {printf("nilai tidak valid");}
    return 0;
}