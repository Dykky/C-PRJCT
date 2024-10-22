#include <stdio.h>

int main()
{
	int a;
	int b;
	
	printf("Masukkan angka 1 : ");
	scanf("%d", &a);
	
	printf("Masukkan angka 2 : ");
	scanf("%d", &b);
	
	int Penjumlahan = a+b;
	printf("Penjumlahan : %d\n", Penjumlahan);
	
	int Pengurangan = a-b;
	printf("Pengurangan : %d\n", Pengurangan);
	
	int Perkalian = a*b;
	printf("Perkalian : %d\n", Perkalian);

    int Pembagian = a/b;
    printf("pembagian : %d\n", Pembagian);
}