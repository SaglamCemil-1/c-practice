#include <stdio.h>
#include <string.h>

/* shopping cart */
int main() {
    char item[99];
    float price;
    int quantity;
    char currency = '$';

    printf("What do you wanna buy: ");
    //scanf("%s", &item);
    fgets(item,sizeof(item),stdin);
    item[strlen(item)-1] = '\0';
    printf("price for each:");
    scanf("%f", &price);
    printf("quantity:");
    scanf("%d", &quantity);

    if (quantity>1)
    {
        printf("you've bought %d %ss",quantity,item);
    }
    if (quantity<=0)
    {
        printf("you have not bought any %s",item);
    }
    if (quantity==1)
    {
        printf("you've bought a %s",item);
    }

    printf("\ntotal is: %c%.2f",currency,price * quantity);

    return 0;
}