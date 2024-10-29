#include <stdio.h>
int main()
{
    int skor;
    printf("Masukkan skor : ");
    scanf("%d", &skor);

    if (skor >=0 && skor<=100) {
    if (skor >= 90) 
    {
        printf("A\n");
    }else if (skor >=80) {
        printf("B\n");
    }else if (skor >=70) {
        printf("C\n");
    }else if (skor >=60) {
        printf("D\n");
    }else {
        printf("F\n");
    }
    }else {
        printf("skor tidak valid");
    }
} //case = ketika