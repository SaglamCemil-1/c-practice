#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    char grade[5] = {0}; //eğer boyut bilinmiyorsa

    int number = 0;
    printf(": ");
    scanf("%d", &number);
    char *grades = malloc(number* sizeof(char));
    //int se veri sizeof(int) -> grade: A,B,C -> char

    if (grades == NULL) {
        printf("ERR:");
        return 1;
    }
    for (int i=0;i<number;i++) {
        printf("enter grade #%d: ", i+1);
        scanf(" %c", &grades[i]);
    }
    for (int i=0;i<number;i++) {
        printf(" %c", grades[i]);
    }

    //geri vercez rami -> free kullan
    free(grades);
    grades = NULL; //avoid dangling pointers

    return 0;
}
