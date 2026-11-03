#include <stdio.h>
#include <stdlib.h>

int main() {
    /*
    FILE * pFile = fopen("../09-Pointers/output.txt", "w");
    // returns null whenever error occures
    if (pFile == NULL) {
        printf("err");
        return 1;
    }

    char text[] = "AAABBBCCC";
    fprintf(pFile,"%s",text);

    fclose(pFile);
    */

    FILE *pFile = fopen("../09-Pointers/input.txt","r");
    if (pFile==NULL) {
        printf("Couldn't ");
    }
    char buffer[1024] = {0};
    //buffer geçici satırı alcak -> okuyup diğer satıra geççek
    //boşsa eğer bırakacak komple 

    while (fgets(buffer,sizeof(buffer),pFile) != NULL) {
        printf("%s",buffer);
    }

    fclose(pFile);
    return 0;
}