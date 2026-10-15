#include <stdio.h>
#include <stdbool.h>

void ticket_discount_calculate();
void calculator();
void comment();

int main() {
    ticket_discount_calculate();
    printf("\n");
    calculator();
    return 0;
}

void comment() {
    int day_of_week= 1;         //char da olur int te
    switch(day_of_week){
        case 1:             // eğer break olmassa -> devamındakiler de çalışır
            printf("Monday");
            break;
        case 2:
            printf("tuesday");
            break;
        case 3:
            printf("wed");
            break;
        case 4:
            printf("thu");
            break;
        case 5:             //bu case doğru sayalım
            printf("fri");
            break;
        case 6:
            printf("sat");
            break;          //önceki de break olmasa buda çalışrıdı
        case 7:
            printf("Sun");
            break;          //önceki de break olmasa buda çalışrıdı
        default: printf("1-7");
    }
}

void ticket_discount_calculate()
{
    int is_senior = 1;
    int is_student = 1;
    float senior_discount=0.1;
    float student_discount = 0.2;
    float price = 10;

    printf("are you a student: ");
    scanf("%d", &is_student);

    printf("are you a senior: ");
    scanf("%d", &is_senior);

    // yada iç içe is senior -> isstudent
    if (is_senior == 1 && is_student == 1) {
        price -= price*(senior_discount+student_discount);
    }
    if (is_senior == 1 && is_student == 0) {
        price -= price*(senior_discount);
    }
    if (is_student == 1 && is_senior == 0) {
        price -= price*student_discount;
    }

    printf("new price is %f", price);
}

void calculator() {
    float A=0;
    float B=0;
    char  C='+';

    printf("1.var: ");
    scanf("%f", &A);

    printf("2.var: ");
    scanf("%f", &B);

    printf("operator :");
    scanf(" %c", &C);

    switch (C) {
        case '+': printf("answer: %.1f",A+B); break;
        case '-': printf("answer: %.1f",A-B); break;
        case '*': printf("answer: %.1f",A*B); break;
        case '/':
            if (B != 0) {printf("answer: %.1f",A/B);}
            else {printf("division by zero");}
            break;
        default : printf("unknown operator");
    }
}