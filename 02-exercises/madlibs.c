#include <stdbool.h>
#include <stdio.h>
#include <string.h>

char* clean_newline(char var[]);

int main() {
    char name[99],person[20],desc[21];

    printf("name: ");
    fgets(name,sizeof(name),stdin);

    printf("person: ");
    fgets(person,sizeof(person),stdin);

    printf("description: ");
    fgets(desc,sizeof(desc),stdin);
    /*
    name[strlen(name)-1] = '\0';
    person[strlen(person)-1] = '\0';
    desc[strlen(desc)-1] = '\0';
    */
    clean_newline(name);
    clean_newline(person);
    clean_newline(desc);

    printf("xxxx :%s \n",  name);
    printf("xxxx :%s \n",person);
    printf("xxxx :%s \n",  desc);

    return 0;
}
/* function */
char* clean_newline(char var[])
//void clean_newline(char var[])
{
    int a = strlen(var);

    if (a==0) {return var;}
    if (var[a-1] == '\n')
    {
        var[a-1] = '\0';
    }
    return var;
    //no returns
}

/* void func()-> in-place değişim (bellek üstünde) olduğu için return a gerek yok*/