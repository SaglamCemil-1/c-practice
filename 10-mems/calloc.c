#include <stdio.h>
#include <stdlib.h>

int main() {
    //calloc()
    //sayı oluştur -> pointer -> calloc

    int num =0;
    printf("number:");
    scanf("%d", &num);

    int *scores = calloc(num,sizeof(int)); //[0 a atadı tüm byte ı]

    for (int a=0; a<num; a++) {
        printf("%d :  ",a+1);
        scanf("%d", &scores[a]);
    } //score null olmamalı hata döndür -> return 1;

    for (int b=0;b<num;b++) {
        printf("%d",scores[b]);
    }
    free(scores);
    scores = NULL;

    return 0;
}
