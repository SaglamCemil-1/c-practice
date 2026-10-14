#include <stdio.h>
#include <limits.h>
#include <math.h>

float calc_bki(float boy, float ağırlık);
// calculates and returns bki (BMI)
void types_of_bki(float bki);
// shows (would not return) the level of skinniness or obeseness

int main() {
    float boy; //int olursa hata
    int yaş;
    float ağırlık;
    char name[5];
    float bki;

    printf("height: ");
    scanf("%f", &boy);

    printf("age: ");
    scanf("%d", &yaş);

    printf("name: ");
    scanf("%s", name);

    printf("kg: ");
    scanf("%f", &ağırlık);

    bki = calc_bki(boy,ağırlık);
    printf("%s 'in bki si %f \n", name, bki);
    types_of_bki(bki);
    return 0;
}

float calc_bki(
    float boy,
    float ağırlık
    ){

    float bki;

    if (boy>3)
    {
        bki = ağırlık / ((boy / 100.0) * (boy / 100.0));
    }
    else
    {
        bki = ((ağırlık / boy) / boy);
    }
    return bki;
}

void types_of_bki(float bki) {
    int one = 1;

    if (0<bki  && bki<=10){ printf("skinny - %d",one+2);}
    if (10<bki && bki<=15){ printf("skinny - %d",one+1);}
    if (15<bki && bki<=20){ printf("skinny - %d",one  );}

    if (20<bki && bki<=25){ printf("perfect    "      );}

    if (25<bki && bki<=30){ printf("obese - %d",one   );}
    if (30<bki && bki<=35){ printf("obese - %d",one+1 );}
    if (35<bki && bki<=40){ printf("obese - %d",one+2 );}

    if (40<bki)           { printf("dead");}

}