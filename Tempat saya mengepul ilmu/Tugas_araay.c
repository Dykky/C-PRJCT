#include <stdio.h>
int main()
{
    int arrLetak_kursi[5][6] = {
        {0,0,0,0,1},
        {0,0,0,0,0},
        {0,0,1,0,0},
        {0,0,0,0,0},
        {0,1,0,0,0},
    };
    int KursiDipesan = 0, KursiKosong = 30;
    int Baris,Kolom;
    int Menu;
    int i,j;

    do {
    printf("=====Pemesanan Tiket Bioskop=====\n");
    printf(" 1.Tata Letak Kursi:\n 2.Pemesanan Kursi :\n 3.Statistik Kursi :\n 4.Keluar\n ");
    printf("Pilih Menu (1-4) : ") ;
    scanf("%d", &Menu);

    switch (Menu) {
        case 1 :
        printf("=====Tata Letak Kursi===== \n");
        for (i=0; i<5; i++) {
            for (j=0; j<6; j++) {
                printf("%d", arrLetak_kursi[i][j]);
            }
            printf("\n");
        }

        case 2 :
        printf("Pilih Baris (1-5): ");
        scanf("%d", &Baris);
        printf("Pilih Kolom (1-5) : ");
        scanf("%d", &Kolom);

        if (Baris<1 || Baris>5 || Kolom<1 || Kolom>6) {
            printf("Baris atau kolom tidak valid");
        }else if (arrLetak_kursi[Baris - 1][Kolom - 1]== 1) {
            printf("Kursi Sudah Dipesan");
        }else {
            arrLetak_kursi[Baris - 1][Kolom - 1]=1;
            KursiDipesan++;
            KursiKosong--;
            printf("Kursi Berhasil Dipesan\n");
        }

        case 3 :
        printf("=====Statistik Kursi===== \n");
        printf("Jumlah Kursi Dipesan : %d\n", KursiDipesan);
        printf("Jumlah Kursi Kosong %d\n", KursiKosong);

        case 4 :
        printf("Terima Kasih Telah Menggunakan Sistem ini\n");
        break;

        default:
        printf("menu tidak valid! Silahkan pilih kembali.\n");
        
        }    
    }while (Menu!=4);

}