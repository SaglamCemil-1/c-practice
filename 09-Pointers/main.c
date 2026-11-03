#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void wish_happy_birthday(int* age);

int main() {
    int age = 25;   //deference operator "*"
    int *pAge = &age;
    printf("%p \n", &age);
    printf("%p \n", pAge);

    wish_happy_birthday(pAge);
    printf("%d",age);
    return 0;
}
//fonksiyon içi data değişmesi için pointer olmalı örn:
void wish_happy_birthday(int* age){
    //deferance kullanmalı
    (*age)++;
}