#include <bemapiset.h>
#include <stdio.h>
#include <stdbool.h>


int problem_1();int problem_2();int problem_3();int problem_4();int problem_5();
int p4_isPalindrome(int a);

int main() {
    problem_1();printf("\n");
    problem_2();printf("\n");
    problem_3();printf("\n");
    problem_4();printf("\n");
    problem_5();printf("\n");
    return 0;
}

int problem_1() {
    int a=1000;
    int divider_1 = 3,divider_2 =5;
    int sum =0;

    for (int k=0;k<a;k++) {
        if (k % divider_1 == 0  ||  k % divider_2 == 0) sum += k;
    }
    printf("The answer is (1): %d",sum);
    return 0;
}

int problem_2() {
    int num_1 =1,num_2 =1,sum=0;
    while (num_1 < 4000000 && num_2<4000000) {
        num_1 = num_1 + num_2;
        num_2 = num_2 + num_1;
        if (num_1 % 2 ==0 && num_1<4000000) sum += num_1;
        else if (num_2 % 2 ==0 && num_2<4000000) sum += num_2;
    }
    printf("The answer is (2): %d",sum);
    return 0;
}

int problem_3() {
    long long num = 600851475143;
    int i = 2;
    while (num != 1) {
        while (num % i ==0) num = num / i;
        i++;
    }
    printf("The answer is (3): %d",i-1);
    return 0;
}

int p4_isPalindrome(int a) {
    int copy=a,rev=0,digit=0;
    while (a != 0) {
        digit = a % 10;
        rev = rev*10 + digit;
        a = a / 10;
        digit = 0;
    }
    if (rev == copy) return TRUE;
    return FALSE;
}
int problem_4() {
    int num=0,max=0;
    int nums[2]={0};

    for (int j =100;j<1000;j++) {
        for (int k=100;k<1000;k++) {
            num = k*j;
            if (num>max && p4_isPalindrome(num)) {
                max = num;
                nums[0] = j; nums[1] = k;
            }
        }
    }
    printf("The answer is (4): %d --- numbers: %d %d",max,nums[0],nums[1]);
    return 0;
}

int problem_5() {
    int num=100,var;

    while (TRUE) {
        var =1 ;
        for (int j=11;j<21;j++) {
            if (num % j != 0) {
                var = 0;
                break;
            }
        }

        if (var == 0) num+=20;
        else if (var == 1) break;
    }

    printf("The answer is (5): %d",num);
    return 0;
}