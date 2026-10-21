#include <bemapiset.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int number_guessing_game();
int project_2();
void project_3();

int main() {
    // printf("%d",rand());
    /*
    srand(time(0));
    printf("%d \n",rand());
    printf("%d", RAND_MAX);

    int min = 15;
    int max = 25;

    for (int i=0; i<15;i++) {
        int num = (rand() % (max - min + 1)) + min;
        printf("\n%d",num);
    }
    */
/*
    srand(time(NULL));
    number_guessing_game();
    project_2();*/
    project_3();
    return 0;
}

int number_guessing_game() {
    int random_number =0;
    int min = 1;
    int max = 100;
    int user_guess = 0;
    int num_of_guess = 0;

    random_number = (rand() % (max - min + 1)) + min;

    while (TRUE) {
        printf("1-100:");
        scanf("%d", &user_guess);
        num_of_guess++;
        
        if (user_guess > random_number) {
            printf("too big! \n");
        }
        else if (user_guess < random_number) {
            printf("too low! \n");
        }
        else {printf("(%d guess) ,right.",num_of_guess); break;}

    }
    // do while ile de yapılır dı
    /*
    do {
        printf(":");
        scanf("%d",num);
        num_of_guess++;
    }while (guess != answer);

    printf("%d right",num_of_guess);
    */
    return 0;
}

int project_2() {
    int min =1;
    int max =3;
    int user_guess =0;
    // 1 -> taş,2 -> makas,3 -> kağıt

    int random_3 = (rand() % 3)+1 ;

    printf("1-rock,2-scissors,3-paper:");
    scanf("%d", &user_guess);

    printf("machine guessed: %d\n",random_3);
    if (user_guess == random_3) {printf("tie");}
    else if (
        user_guess == 3 & random_3 == 1 ||
        user_guess == 2 & random_3 == 3 ||
        user_guess == 1 & random_3 == 2
        ) {
        printf("you won");
    }
    else {printf("you lost:");}

    return 0;

}

void project_3() {
    // herşey 1 functa -> daha baş
    // bu nasıl bir yorum ne demek istedim acaba

    float balance = 0;
    float send = 0;
    float withdraw = 0;
    int operation = 0;
    char co = 'Y';

    do {
        do {
        printf( "choose : 1 - seeing balance \n"
                "choose : 2 - send money to someone \n"
                "choose : 3 - withdraw money \n: ");
        scanf(" %d", &operation);

        }   while (operation>0 && operation <4);

    switch (operation) {
        case 1:
            printf("balance is %f \n",balance);
            break;
        case 2:
            printf("your balance is %f \n",balance);
            printf("how much: ");
            scanf("%f", &send);
            if (send>balance) {
                printf("err: balance<ss");
                break;
            }
            balance -= send;
            break;
        case 3:
            printf("your balance is %f \n",balance);
            printf("how much:");
            scanf("%f", &withdraw);
            if (withdraw>balance) {
                printf("err: balance<ss");
                break;
            }
            balance -= withdraw;
            break;
        case 4:
            printf("how much: ");
            scanf("%d", &send);
            balance += send;
            break;
        default:
            printf("op should be one of 1,2,3, ");
            break;
    }
        printf("do again: Y- yes N-no:");
        scanf(" %c",&co);

    }   while (co == 'Y' || co == 'y');

    return;
}
