#include <bemapiset.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    int numbers[] = {40,50,60,80,100};
    char grades[] = {'A','B','C','D','F'};
    int i = sizeof(numbers) / sizeof(numbers[0]);

    /* grades[1] = 'D';
    olmayan birşey verilirse başka sayı döner -1825238135 gibi
    toplam eleman byte / eleman byte = eleman sayısı -> len()
    */

    if (TRUE) {
        printf("%d ",numbers[1]);
        printf("%c \n",grades[1]);
        printf("%.0llu -bytes \n",sizeof(numbers[0]));
    } //basics
    for (int a =0 ; a<i ; a++) {
        printf("%c :%d |", grades[a], numbers[a]);
    } //in_array
    for (int a=0; a<i; a++) {
        a == 0 ? printf("\n") : printf("");
        printf("%c :%d |", grades[a], numbers[(i-a)-1]);
        printf("\n");
    } //reverse index

    // uzunluğu belli array tanımlanırken en iyisi hepsini 0 yapmak
    int user_nums[] = {}; //int user_nums[5] = {0}
    int user_num,collector=0;
    do {
        printf("add X except 0: ");
        scanf("%d", &user_num);
        if (user_num ==0) {break;}
        user_nums[collector] = user_num;
        collector ++;
    }   while (user_num != 0);
    for (int c=0; c< collector; c++) {printf("%d |",user_nums[c]);}


    return 0;
}