#include <stdio.h>
int main()
{
    int i;
    int a = 3;
    for (i=3; a<=243; i*=3);
    {
        printf("%d\t", a);
        a*=i;
    }
}