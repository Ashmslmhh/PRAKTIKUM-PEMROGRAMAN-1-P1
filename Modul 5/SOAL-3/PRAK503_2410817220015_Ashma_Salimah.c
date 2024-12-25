#include <stdio.h> 
int maksimal(int a, int b){ 
    int maxbil = a;
    if (b > maxbil) maxbil = b;
    return maxbil; } 
int minimal(int a, int b){ 
    int minbil = a;
    if (b < minbil) minbil = b;
    return minbil; } 
int main(){ 
    int batas = 0; 
	int maks = -100000; 
    int minim = 100000; 
    int bilangan; 
    scanf("%d", &bilangan); 
    while(batas < bilangan){ 
	int nilai; 
	scanf("%d", &nilai); 
	maks = maksimal(maks, nilai); 
	minim = minimal(minim, nilai); 
	batas++; } 
    printf("%d %d",maks,minim); }