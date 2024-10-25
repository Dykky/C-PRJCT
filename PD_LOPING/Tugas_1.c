#include <stdio.h>

int main() 
{
     int i;
     int a=1;

     for (i = 0; a<= 16; i++)
     {
         printf("%d\t", a);
         a+=i+1;
     }
}