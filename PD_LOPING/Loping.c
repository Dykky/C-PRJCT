#include <stdio.h>
// int main()
// {
//     int i;
//     int a = 3;
//     for (i=3; a<=243; i*=3);
//     {
//         printf("%d\t", a);
//         a*=i;
//     }
// }

// int main()
// { 
//     int i;
//     for (i=3; i <=243; i*=3)
//     {
//         printf("%d\t", i);
//     }
// } 

// int main() 
// {
//     for(int i=1; i<=10; i++)
//     {
//         if(i%2==1)
//         {
//             printf("%d\t",i*i);
//         }
//         else 
//         {
//             printf("%d\t", i*i*i);
//         }
        
//     }
// }

// int main()
// {
//     int ganjil=1;
//     int genap=2;

//     for(int i=1; i<=10; i++)
//     {
//         if (i%2==1) 
//         {
//             printf("%d\t", ganjil++);
//         }
//         else 
//         {
//         printf("%d\t", genap+=2);
//         }
//     }
// }

// int main()
// {
//     for(int i=1; i<=12; i++)
//     {
//         if (i%2==1) 
//         {
//             printf("%d\t", (i+1)/2);
//         }
//         else {
//         printf("%d\t", i+1);
//         }
//     }
// }

int main()
{
    int ganjil=0;
    int genap=1;

    for(int i=1; i<=11; i++)
    {
        if (i%2==1) {
        printf("%d\t", ganjil+=1);
        }else {
        printf("%d\t", genap+=2);
        }
    }
}