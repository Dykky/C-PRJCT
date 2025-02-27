#include <stdio.h>

int main() {
    int jumlahMahasiswa, i, j;
    float totalMatematika = 0, totalFisika = 0, totalKimia = 0;
    float totalKeseluruhan = 0;
    
    // Meminta input jumlah mahasiswa
    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &jumlahMahasiswa);
    
    // Membuat array multidimensi untuk menyimpan nilai ujian setiap mahasiswa
    float nilai[jumlahMahasiswa][3];
    
    // Input nilai ujian untuk setiap mahasiswa
    for (i = 0; i < jumlahMahasiswa; i++) {
        printf("\nMasukkan nilai untuk mahasiswa %d:\n", i + 1);
        printf("Nilai Matematika: ");
        scanf("%f", &nilai[i][0]);
        printf("Nilai Fisika: ");
        scanf("%f", &nilai[i][1]);
        printf("Nilai Kimia: ");
        scanf("%f", &nilai[i][2]);
    }
    
    // Menampilkan header tabel
    printf("\nTabel Nilai Ujian\n");
    printf("Mahasiswa  Matematika  Fisika  Kimia \n");

    // Menampilkan nilai per mahasiswa dan menghitung total nilai
    for (i = 0; i < jumlahMahasiswa; i++) {
        float rataRata = (nilai[i][0] + nilai[i][1] + nilai[i][2]) / 3.0;
        
        printf("Mhs %2d     %.2f      %.2f    %.2f   \n", 
                i + 1, nilai[i][0], nilai[i][1], nilai[i][2]);
        
        totalMatematika += nilai[i][0];
        totalFisika += nilai[i][1];
        totalKimia += nilai[i][2];
        totalKeseluruhan += rataRata;
    }

    

    // Menghitung dan menampilkan rata-rata per mata kuliah dan rata-rata keseluruhan
    printf("\nRata-rata Nilai:\n");
    printf("Matematika: %.2f\n", totalMatematika / jumlahMahasiswa);
    printf("Fisika: %.2f\n", totalFisika / jumlahMahasiswa);
    printf("Kimia: %.2f\n", totalKimia / jumlahMahasiswa);
    printf("Rata-rata nilai keseluruhan: %.2f\n", totalKeseluruhan / jumlahMahasiswa);

    return 0;
}