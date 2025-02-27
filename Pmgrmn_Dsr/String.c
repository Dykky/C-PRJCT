#include <stdio.h>
#include <string.h>
int main ()
{
    char arrkarakter[100];
    printf("Masukkan nama lembaga : ");
    scanf("%s", &arrkarakter);

    printf("\nNama lembaga adalah : %s", arrkarakter);

    int panjang = strlen (arrkarakter);
    printf("\nPanjang inputan adalah %d", panjang);
}