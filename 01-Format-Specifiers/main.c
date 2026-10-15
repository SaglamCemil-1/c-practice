#include <stdio.h>
#include <stdbool.h>
#include <string.h>

float calculate(void);

int main() {
    printf("%.2f",calculate());
    return 0;

}

float calculate() {
    float a,b,calculation;
    char c;

    printf("1. var:");
    scanf("%f", &a);
    printf("2. var:");
    scanf("%f", &b);
    printf("calc:");
    scanf(" %c", &c); // %c de önceki \n duruyor boşluk olmalı

    if (c == '-') {return a-b;}
    if (c == '+') {return a+b;}
    if (c == '*') {return a*b;}
    if (b != 0){if (c == '/' && b != 0) {return a/b;}}
}

char comment(void)
{
            /* Format Specifier */

    // %3d -> .38 , 100, ..8 olur başlangıç öncesi boşluk
    // %-3d -> 38. , 100 , 8.. olur sondan öncesi boşluk
    // %04d -> boşluk değil 0 olur 038 , 008
    // %+d -> +38 -08 , // %+3.2f -> +/- | 3 boşluk | 2 rakam --> +15.00,-14.01
    // d = '\0' //null terminator -> temizler

            /* User Input */

    // fgets -- scanf
    char name[12];
    // \n duruyor -> getchar();
    //               printf();
    //               fgets(); -> olursa düzelir
    fgets(name, 12 /*sizeof(name)*/, stdin); //stdin -> standart input
    // \n i kaldırmak için
    name[strlen(name)-1] = '\0';
    
}