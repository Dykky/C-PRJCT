#include <stdio.h>
#include <string.h>

int main () {
    int jumlahBuah;  // Variabel buat menyimpan jumlah buah yang akan dimasukkan
    char daftarBuah[10][20];  // buat menyimpan nama buah
    int i,j;
    // inputan user jumlah buah yang ingin dimasukkan
    printf("Masukkan jumlah buah (Maksimal 10): ");
    scanf("%d", &jumlahBuah);

    // Memastikan jumlah buah yang dimasukkan tidak lebih dari 10
    if (jumlahBuah <= 10) {
        // Memasukkan nama buah ke dalam array
        for (i = 0; i < jumlahBuah; i++) {
            printf("Masukkan Nama buah ke-%d: ", i + 1);
            scanf("%s", daftarBuah[i]);  // Menyimpan nama buah yang dimasukkan ke dalam array
        }

        // Menampilkan nama buah yang sudah dimasukkan
        printf("\nNama buah dalam urutan yang diinputkan:\n");
        for ( i = 0; i < jumlahBuah; i++) {
            printf("%s \n", daftarBuah[i]);  // Menampilkan nama buah yang ke-i
        }

        // Mengurutkan nama buah secara abjad 
        for ( i = 0; i < jumlahBuah - 1; i++) {
            for ( j = 0; j < jumlahBuah - i - 1; j++) {
                // Bandingkan dua buah, jika tidak berurutan secara abjad, tukar posisi
                if (strcmp(daftarBuah[j], daftarBuah[j + 1]) > 0) {
                    // Menukar nama buah dengan menggunakan variabel sementara
                    char tempat[20];
                    strcpy(tempat, daftarBuah[j]); 
                    strcpy(daftarBuah[j], daftarBuah[j + 1]);
                    strcpy(daftarBuah[j + 1], tempat);
                }
            }
        }

        // Menampilkan nama buah yang sudah diurutkan
        printf("\nNama buah dalam urutan abjad:\n");
        for ( i = 0; i < jumlahBuah; i++) {
            printf("%s \n", daftarBuah[i]);  // Menampilkan nama buah yang ke-i
        }
    } else {
        printf("Input maksimal 10 buah.\n");
    }

    return 0;
}