#include <windows.h>
#include <stdio.h>

int main_1();
int main_2();
int main_3();
int main() {
    main_1();
    main_2();
    main_3();

    return  0;
}

int main_1() {
    int N,count=0,maxidx=0,minidx=0,is_counted=0;
    int arr[100] = {0};
    int helperarr[100] = {0};

    printf("sayıyı gir: "); //controls N
    scanf("%d",&N);

    for (int m=0;m<N;m++) { //controls arr[100]
        scanf("%d",&arr[m]);
    }

    for (int i=0; i<N;i++) {    //count every element
        for (int k=0;k<N;k++) {     //are there any same
            if (arr[k] == arr[i]) {
                count++;
            }
        }
        for (int l=0;l<i;l++) { //are we met this element before
            if (arr[l] == arr[i]) {
                is_counted =1;
                break;
            }
        }
        if (is_counted == 0) { //if not occures this many times
            printf("%d occures %d times \n",arr[i],count);
        } //else do nothing we already printed it
        is_counted =0;
        count =0;
    }

    return 0;
}

int main_2() {
    char str1[100],str2[100],combined[200];
    char absoulete[100],absoulete2[100];
    int i=0,j=0,is_identical=0;

    scanf("%s",str1);
    scanf("%s",str2);

    //same or not
    while (str1[i] != '\0') {
        absoulete[i] = str1[i];
        i++;
    }
    while (str2[j] != '\0') {
        absoulete2[j] = str2[j];
        j++;
    }
    if (i == j) {
        is_identical =1;
        for (int l=0;l<j;l++) {
            if (str1[l] != str2[l]) {
                is_identical = 0;
                break;
            }
        }
    }
    if (is_identical){printf("they are identical");}
    // return 0 if we dont wantto combine if they are identical
    for (int y=0;y<(i+j);y++) {
        if (y<i) combined[y] = str1[y];
        else if (y>=i && y<i+j) combined[y] = str2[y-i];
    }
    combined[i+j]= '\0';
    printf("%s",combined);
    return 0;
}

int main_3() {
    int N,result=0;
    int matris[10][10],trans[10][10];
    scanf("%d",&N);

    for (int z=0;z<N;z++) {
        for (int l=0;l<N;l++) {
            scanf("%d",&matris[z][l]);
        }
    }

    for (int a=0;a<N;a++) {
        result += matris[a][a];
    }

    for (int b=0;b<N;b++) {
        for (int c=0;c<N;c++) {
            trans[b][c] = matris[c][b];
        }
    }
    for (int e=0;e<N;e++) {
        for (int f=0;f<N;f++) {
            printf("%d",trans[e][f]);
        }
        printf("\n");
    }

    return 0;
}