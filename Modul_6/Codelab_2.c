#include <stdio.h>
#include <string.h>


struct Mahasiswa { //struktur untuk menyimpan data mahasiswa
    char nama[50]; //nama mahasiswa
    char nim[50]; // nomor induk mahasiswa
    char program_studi[50]; // program studi mahasiswa
};

int main() {
    struct Mahasiswa *mahasiswa; // pointter untuk menyimpan data mahasiswa dalam memori
    FILE *fp; // pointer untuk file yang di gunakan untuk menyimpan data mahasiswa 
    int pilihan, jumlahMahasiswa; // variabel untuk menyimpan pilihan menu dan jumlah nama mahasiswa yang ingin dicatat
    int i; //variabel dalam looping
    do {
        printf("\nPilih aksi:\n"); // menampilkan menu pilihan
        printf("1. Tulis data mahasiswa\n");
        printf("2. Baca data mahasiswa\n");
        printf("Masukkan pilihan: ");
        scanf("%d", &pilihan); // mengambil input dari user untuk pilihan menu 

        switch (pilihan) {
            case 1:
                
                printf("Masukkan jumlah mahasiswa yang ingin dicatat: "); //tulis data mahasiswa ke file 
                scanf("%d", &jumlahMahasiswa);//mengambil jumlah mahasiswa yang di catat

                mahasiswa = (struct Mahasiswa*) malloc(jumlahMahasiswa * sizeof(struct Mahasiswa)); // memori array mahassiwa berdasarkan jumlah mahasiswa yang diminta
                if (mahasiswa == NULL) { //mencek apakah alokasi memori berhasil
                    printf("Alokasi memori gagal!\n");
                    return 1; // mengambalikan 1 jika alokasi gagal
                }

                for (i = 0; i < jumlahMahasiswa; i++) { // mengambil data mahasiswa dari pengguna
                    printf("Mahasiswa ke-%d\n", i + 1); //menampilkan nomor mahasiswa 
                    printf(" Masukkan Nama: ");
                    scanf("%s", mahasiswa[i].nama); // mengambil input nama mahasiswa
                    printf(" Masukkan NIM: ");
                    scanf("%s", mahasiswa[i].nim); // mengambil input nim mahasiswa
                    printf(" Masukan Program Studi: ");
                    scanf("%s", mahasiswa[i].program_studi);// mengambil program studi mahasiswa
                }

                fp = fopen("data_mahasiswa.txt", "w"); // membuka file untuk menulis data mahasiswa
                if (fp == NULL) { //jika gagal membuka file
                    printf("Gagal membuka file!\n");
                } else {
                    for (i = 0; i < jumlahMahasiswa; i++) { //menulis data mahasiswa ke dalamm file
                        fprintf(fp, "%s %s %s\n", mahasiswa[i].nama, mahasiswa[i].nim, mahasiswa[i].program_studi);
                    }
                    fclose(fp); // menutup file setelah selesai menulis
                    printf("Data mahasiswa berhasil ditulis ke file.\n");
                }
                break;

            case 2:
                // Baca dan tampilkan data mahasiswa dari file
                fp = fopen("data_mahasiswa.txt", "r"); // membuka file untuk membaca data
                if (fp == NULL) { // cek jika gagal dibuka
                    printf("Gagal membuka file!\n");
                } else {
                    printf("\nData mahasiswa:\n"); // menampilkan data mahasiswa
                    int i = 0;
                    while (fscanf(fp, "%s %s %s", mahasiswa[i].nama, mahasiswa[i].nim, mahasiswa[i].program_studi) != EOF) { // membaca file hingga end of fike dan menampikannya
                        printf("Masukan Nama: %s\n", mahasiswa[i].nama); // menampilkan nama 
                        printf("Masukan NIM: %s\n", mahasiswa[i].nim); // menampilkann nim 
                        printf("Masukan Program Studi: %s\n\n", mahasiswa[i].program_studi); //menampilkan program studi
                        i++;
                    }
                    fclose(fp); // menutup file setelah selesai membaca
                }
                break;


            default:
                printf("Pilihan tidak valid.\n"); //jika ada menu yang tidak valid
        }
    } while (pilihan);

    free(mahasiswa);

    return 0;
}