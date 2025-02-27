#include <stdio.h>
int main ()
{
    int jumlah_mahasiswa;

    printf("===== Program Pengelompokan Nilai Mahasiswa =====");

    printf("\nMasukkan Jumlah Mahasiswa : ");
    scanf("%d", &jumlah_mahasiswa);

    int nilai[jumlah_mahasiswa];
    int kategori[5] = {0,0,0,0,0,};
    int i=3;
    for (i=0; i < jumlah_mahasiswa; i++) {
        printf("Masukkan nilai mahasiswa ke-%d : ", i + 1);
        scanf("%d", &nilai[i]);
    }

    printf("Hasil Kategori : ");
    
    for (i = 0 ; i < jumlah_mahasiswa;i++ ) {
        char Kategori_nilai;
        
        if (nilai[i] >= 85) {
            Kategori_nilai = 'A';
            kategori[0]++;
        }else if (nilai[i] >= 70) {
            Kategori_nilai = 'B';
            kategori[1]++;
        }else if (nilai[i] >= 55) {
            Kategori_nilai = 'C';
            kategori[2]++;
        }else if (nilai[i] >=40) {
            Kategori_nilai = 'D';
            kategori[3]++;
        }else {
            Kategori_nilai = 'E';
            kategori[4]++;
        }
        printf("\nMahasiswa %d: Nilai :%d, Kategori :%c", i+1, nilai[i], Kategori_nilai);
    }

    printf("\nJumlah Mahasiswa di Setiap Kategori :\n ");
    char kategori_list[] = {'A', 'B', 'C','D','E' };
    for (i = 0 ; i<5 ; i++) {
        printf("%c : %d Mahasiswa\n", kategori_list[i], kategori[i]);
    }

}