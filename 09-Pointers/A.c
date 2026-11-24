#include <stdio.h>
#include <stdlib.h>

// İşletim sistemine göre doğru kütüphaneyi seçelim
#ifdef _WIN32
    #include <direct.h>
    #define getcwd _getcwd
#else
    #include <unistd.h>
#endif

int main() {
    char cwd[1024];
    if (getcwd(cwd, sizeof(cwd)) != NULL) {
        printf("Dosyaniz su an bu klasorde olustu:\n%s\n", cwd);
    }

    FILE * pFile = fopen("output.txt","w");
    if (pFile != NULL) {
        char text[] = "AAA BBB CCC";
        fprintf(pFile,"%s",text);
        fclose(pFile);
    }
    return 0;
}
