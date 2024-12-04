#include <stdio.h>
int main()
{
    char gender [50];
    printf("Male or Female : ");
    scanf("%s", &gender);

    if (strcmp (gender,"Male" || gender,"male" )){
        printf("Male\n");
    } else if (strcmp (gender,"Female" || gender, "female")){
        printf("Female\n");
    }else {
        printf("error");
    }
}