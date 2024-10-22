#include <stdio.h>
int main()
{
    printf("-------Progam Penghitung Nilai Akhir Mahasiswa---------\n");
    char nama[50];    
    printf("Masukkan Nama Mahasiswa : ");
    gets(nama);

    long long int Nim_mahasiswa;
    printf("Masukkan Nim Mahasiswa : ");
    scanf("%lld", &Nim_mahasiswa);

    float Nilai_a;
    printf("Masukkan Nilai Tugas (0-100) : ");
    scanf("%f", &Nilai_a);

    float Nilai_b;
    printf("Masukkan Nilai UTS (0-100) : ");
    scanf("%f", &Nilai_b);

    float Nilai_c;
    printf("Masukkan Nilai UAS (0-100) : ");
    scanf("%f", &Nilai_c);

    printf("---------------------------------------------------------\n");

    printf("Nama : %s\n", nama);
    printf("Nim : %lld\n", Nim_mahasiswa );
    printf("Nilai Tugas : %.2f\n", Nilai_a);
    printf("Nilai UTS : %.2f\n", Nilai_b);
    printf("Nilai UAS : %.2f\n", Nilai_c);

    float nilai_akhir = Nilai_a*20/100+Nilai_b*35/100+Nilai_c*45/100;

    printf("Total Nilai adalah : %.2f\n", nilai_akhir);

    printf("------------------------TERIMAKASIH------------------------\n");
    printf("                 208_DICKY HABIB PUTRA H ");



}