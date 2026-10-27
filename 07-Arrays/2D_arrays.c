#include <stdio.h>

                // Contineu On Array Of Strings
int main() {
    //2D name_array[][*] *zorunlu eğer: [][*][*]
    int numbers[3][3] = {{1,2,3},
                         {4,5,6},
                         {7,8,9}};
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            printf("|%d ",numbers[i][j]);
        }
    }
    printf("\n-------\n");
    char cep[4][3] = {{'1','2','3'},
                    {'4','5','6'},
                    {'7','8','9'},
                    {'#','0','*'}};
    for (int i=0; i<4; i++) {
        for (int j=0; j<3; j++) {
            printf("%c ",cep[i][j]);
        }
        printf("\n");
    }

    return 0;
}