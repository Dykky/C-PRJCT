#include <stdio.h>
int main()
{
    char nama[50];
    printf("Masukkan nama : \n");
    gets(nama);

    int tanggal;
    printf("Masukkan tanggal : ");
    scanf("%d", &tanggal);

    float gaji;
    printf("Masukkan gaji : ");
    scanf("%f", &gaji);

    float waktu; 
    printf("Masukkan lama jam berkerja : ");
    scanf("%f", &waktu);
    
    printf("Angka yang diinput adalah : %d\n", tanggal);
    printf("nama : %s\n", nama); 
    printf("gaji : %.2f\n", gaji);
    printf("lama waktu : %.2f\n", waktu);

    float Gaji_total = gaji*waktu;
    if (waktu>5) {
        int Total_bonus = 
    } 
    printf("Total semua gaji : %.2f\n", Gaji_total);
    printf("Total gaji lembur : %.2f\n", Gaji_tambahan);

}