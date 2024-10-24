#include <stdio.h>

int main()
{
   int i;
   int a=1;

    for (i=1;a<=49;i+=2)
    {
    printf("%d\t",a);
    a+=i+2;
    }
}