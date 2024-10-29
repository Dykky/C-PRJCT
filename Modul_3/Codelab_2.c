#include <stdio.h>
    enum kelas {
        Economy = 400,
        Business = 500,
        FirstClass= 600
    };

    int main () {
        int pesanan;
        printf("========Bandara Dicky========\n");
        printf("list Kelas :\n 1. Economy\n 2. Bussiness\n 3. FirstClass\n");
        printf("Masukkan pilihan kelas (1-3) :");
        scanf("%d", &pesanan);

        if (pesanan >0 && pesanan <4) {
            if (pesanan == 1) {
                printf("Harga tiket pesawat kelas Economy yang harus dibayar sebesar $%d", Economy);
            }else if (pesanan == 2) {
                printf("Harga tiket pesawat kelas Business yang harus dibayar sebesar $%d\n", Business);
            }else if (pesanan == 3) {
                printf("Harga tiket pesawat kelas FirstClass yang harus dibayar sebesar $%d\n", FirstClass);
            }else {
                printf("Tiket tidak terdaftar");
            }
        }else {
            printf("Tiket tidak terdaftar");
        }
    }
