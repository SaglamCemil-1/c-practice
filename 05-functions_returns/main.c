#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <windows.h>

/*
 *      scope -> {} aralıkları dır fonksiyon dışı tanımlanır ise global olur -> hard to debug
 *      aynı isimde değişkenler barınamaz aynı scope içnide
 *      function protytpe -> main den önce tanımlama -> tepeden aşşağı bakıldığı için
 *      return_type function_name(var_type var,var_type var...)
 *      prototype olmadan çalıştırılamaz (ya önce tanımlanacak yada prototype
*/

/*
 *  fonksiyon tanım kullanım ->
 *  return_type function_name(var_type var,var_type var...){ ... some calculations ... }
*/

// void print(int age) { printf("%d",age); }

/*
 *      while (condition) {... some calculations ...}
 *      user input için iyi geçerli olmayan type ta tekrar veri ister
 *      do {
 *      cond false olsa bile en az 1 kere çalışacak işlemler
 *      } while(cond);
*/

/*
 *      for loop -> for(initialization ; condition ; update [what to do(x++)]) {... some calc ...}
 *      break -> durdur | contineu -> başa dön devam et
*/
void project_1();

int main() {

    project_1();

    return 0;
}

void project_1() {
    int rows;
    int lines;
    char sembol;

    while (true){
        printf("rows: ");
        scanf("%d", &rows);

        printf("lines: ");
        scanf("%d", &lines);

        printf("lines: ");
        scanf(" %c", &sembol);

        break;
    }

    for (int a=0; a<rows; a++) {
        for (int b=0; b<lines; b++) {
            printf("%c",sembol);
        }
        printf("\n");
    }


}
