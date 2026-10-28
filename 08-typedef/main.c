#include <bemapiset.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef int numbers;    //improve readability
typedef char string[100];

/*  only enum
enum Day {
    Sunday = 1,
    Monday = 2,
    Tuesday= 3,
    Wednesday = 4,
    Thursday = 5,
    Friday = 6,
    Saturday = 7,
};*/

//+type def
typedef enum{
    Sunday = 1,
    Monday = 2,
    Tuesday= 3,
    Wednesday = 4,
    Thursday = 5,
    Friday = 6,
    Saturday = 7,
}Day ;

//structs
//abstract class tarzı

struct Student {
    //her öğrencinin alacağını ->zorunlu değil ->çöp döner
    char name[25];
    int age;
    float gpa;
    bool is_Student;
};
/* aynı kurallar geçerli enum/typedefteki (syntax)
typedef struct {
    //her öğrencinin alacağını ->zorunlu değil ->çöp döner
    char name[25];
    int age;
    float gpa;
    bool is_Student;
}Student ;*/

void func(struct Student öğrenciler);

int main() {
    printf("\n --------TYPEDEF-------- \n");
    //typedef
    numbers X = 15;
    numbers Y = 14;

    char name[] = "Cemil";
    string name_ = "Cemil";
    printf("%s %s",name,name_);

    printf("\n --------ENUMS-------- \n");

    //enums
    // enum Day today = Sunday;
    // enum+typedef
    Day today = Sunday;
    printf("%d",today);

    if (today == Sunday || today == Saturday) {
        printf("weekend");
    } else {printf("weekday");}

    printf("\n --------STRUCT-------- \n");

    // struct
    /* struct X,Y de struct yazmak zorunlu değil
     * düz sıra ilede isim gözeterek te olur */

    struct Student öğrenci_ = {
        .name = "A",.age = 15,.gpa = 3.00,.is_Student = TRUE
    };
    struct Student öğrenci_1;  // öğrenci_1 = {a,b,c}

    öğrenci_1.age = 5;  //str için fonksiyon kullanmak lazım
    strcpy(öğrenci_1.name,"Ahmet"); //her tip için kullanılabilir
    öğrenci_1.gpa = 3.000;
    öğrenci_1.is_Student = TRUE;

    printf("\n%s \n",öğrenci_1.name);
    printf("%d \n",öğrenci_1.age);
    printf("%.2f",öğrenci_1.gpa);
    func(öğrenci_1);

    printf("\n --------ARRAYS OF STRUCTS-------- \n");
    struct Student öğrenciler[] = {
        {"Ahmet",öğrenci_1.age,öğrenci_1.gpa},
        {"A",öğrenci_.age,öğrenci_.gpa},
    };
    int number = sizeof(öğrenciler)/sizeof(öğrenciler[0]);
    for (int i=0; i<3;i++) {
        printf("%s %d %.2f \t",
            öğrenciler[i].name,
            öğrenciler[i].age,
            öğrenciler[i].gpa);
    }

    return 0;
}

void func(struct Student öğrenci) {
    printf("%s \n",öğrenci.name);
    printf("%d \n",öğrenci.age);
    printf("%.2f\n",öğrenci.gpa);
    printf("%.2d",öğrenci.is_Student);
}