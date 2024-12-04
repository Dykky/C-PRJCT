#include <stdio.h>
int main ()
{
    printf("Daftar nama dan nilai siswa sebelum diubah : \n");
    int Nilai[5] = {85,90,78,92,88};
    char Nama[5][50]={"Alice","Bob","Charlie","David","Eva"};
    int i;

    for (i = 0; i<5; i++) {
        printf("%s:%d\n",Nama[i] , Nilai[i] );
    }

    printf("\nDaftar nama dan nilai siswa setelah diubah : \n");    
    for (i = 0; i<5; i++) {
        printf("%s:%d\n",Nama[i] , Nilai[i] );
        Nilai[3] = 95;
    }

    return 0;
}