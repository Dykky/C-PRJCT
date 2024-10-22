#include <stdio.h>
int main()
{
	   	printf("========== Progam Penghitung Kalori Harian ===========\n");
	   	printf("Progam ini akan menghitung total kalori harian yang dikomsumsi\n");
	   	
	   	int Kalori_Makanan_Pertama;
	   	int Kalori_Makanan_Kedua;
	   	int Kalori_Makanan_Ketiga;
        const int batas_harian = 2500;
	   	
	   	printf("Masukkan Kalori Makanan Pertama :", Kalori_Makanan_Pertama);
	   	scanf("%d", &Kalori_Makanan_Pertama);	 
		   
		printf("Masukkan Kalori Makanan Kedua :", Kalori_Makanan_Kedua);
	   	scanf("%d", &Kalori_Makanan_Kedua); 
		   
		printf("Masukkan Kalori Makanan Ketiga :", Kalori_Makanan_Ketiga);
	   	scanf("%d", &Kalori_Makanan_Ketiga); 
		   
		int Total_kalori = Kalori_Makanan_Pertama + Kalori_Makanan_Kedua + Kalori_Makanan_Ketiga;
		printf("Total Kalori : %d \n", Total_kalori);
		
		if (Total_kalori >=batas_harian){
			printf("Total Kalori melebihi batas harian\n");
		}else
		{
			printf("Total kalori tidak melebihi batas harian\n");
		}
		return 0;
			
}