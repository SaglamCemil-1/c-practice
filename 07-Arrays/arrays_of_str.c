#include <ctype.h>
#include <stdio.h>
#include <string.h>

void quiz_game();
void exercise_1();

int main() {
    char fruits[][10] = {"Apple","Banana"};
    int size = sizeof(fruits) / sizeof(fruits[0]);
    fruits[0][0] = 'E';
    fruits[0][-1] = 'A';

    for (int i =0; i < size ;i++) {
        printf("%s\n",fruits[i]);
    }
    exercise_1();
    quiz_game();

    printf("%d %s",size,size % 2 == 0 ? "and size is even":"odd");
    return 0;
}

void exercise_1() {
    char names[3][20] = {0};

    for (int i=0; i < sizeof(names) / sizeof(names[0]);i++) {
        printf("name: ");
        fgets(names[i],sizeof(names[i]),stdin);
        names[i][strlen(names[i])-1] = '\0';
        printf("%s",names[i]);
        printf("\n");
    }
    printf("aa");

    printf("name: ");
    fgets(names[1],sizeof(names[1]),stdin);
    names[1][strlen(names[1])-1] = '\0';

    printf("%s",names[1]);
    printf("name: ");
    fgets(names[2],sizeof(names[2]),stdin);
    names[2][strlen(names[2])-1] = '\0';

    printf("%s",names[2]);
}

void quiz_game() {
    char question[][50] = { "the Answer is A",
                            "the Answer is B",
                            "the Answer is C"};
    char options[][50] = {
        "A: __ \nB: ** \nC: !! \nD: ?? \n",
        "A: __ \nB: ** \nC: !! \nD: ?? \n",
        "A: __ \nB: ** \nC: !! \nD: ?? \n",
    };
    char answer_key[3] = {'A','B','C'};
    char guess[3][10] = {0};
    int point = 0;

    for (int i=0; i< sizeof(question)/sizeof(question[0]);i++) {
        printf("\n%s \n%s",question[i],options[i]);

        printf("your guess?:");
        fgets(guess[i],sizeof(guess[0]),stdin);
        guess[i][0] = toupper(guess[i][0]);
        guess[i][strlen(guess[i])-1] = '\0';

        printf("your guess was: %s\n" , guess[i]);
        guess[i][0] == answer_key[i] ? point= point+5 : 0;
    }
    printf("%d",point>0 ? point : 0);
    return;
}