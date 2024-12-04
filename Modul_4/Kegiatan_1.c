#include <stdio.h>
int main()
{
    int input;
    int total; 
    int lanjut;

    do { 
        total = 0; // Inisialisasi ulang total setiap kali memulai siklus transaksi baru
        printf("=== Pencatatan Transaksi === \n");
        printf("Masukkan transaksi selanjutnya (gunakan 0 untuk menyelesaikan):\n");

        do {
            scanf("%d", &input); // Membaca input transaksi dari pengguna
            total += input; // Menambahkan input ke total
        } while (input != 0); // Keluar dari loop jika transaksi bernilai 0

        printf("\nTotal dari transaksi tersebut adalah: %d \n", total);

        printf("Apakah Anda ingin mencatat transaksi lagi? (1 = Ya, 0 = Tidak): ");
        scanf("%d", &lanjut); // Membaca keputusan pengguna untuk melanjutkan atau berhenti
        printf("\n");
    } while (lanjut == 1); // Ulangi proses selama pengguna memilih untuk melanjutkan

    printf("Terima kasih! \n");
    while (lanjut == 1) {
    ggfusg
    }
    for (int i = 0; i < 10 ; i++) {
    printf("%d", angka[i]);
    }

}