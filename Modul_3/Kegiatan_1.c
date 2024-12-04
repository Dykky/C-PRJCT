#include <stdio.h>
enum Film {
    Spiderman = 50000,
    Batman = 55000,
    Superman = 60000,
    Avengers = 70000,
    Joker = 45000 
};

enum Jenis_tiket{
    Reguler = 30000,
    VIP = 100000,
    VVIP = 150000
};

int main ()
{
    int Film;
    printf("=========BIOSKOP=========\n");
    printf("Film : \n");
    printf(" 1. Spiderman - Rp.50000\n 2. Batman - Rp.55000\n 3. Superman - RP.60000\n 4. Avengers - Rp.70000\n 5. Joker - Rp.45000\n");
    printf("Pilih film (1-5) : ");
    scanf("%d", &Film);

    int Jenis_tiket;
    printf("Jenis Tiket : \n");
    printf(" 1. Reguler - Rp.30000\n 2. VIP - Rp.100000\n 3. VVIP - Rp.150000\n");
    printf("Pilih Jenis tiket (1-3) :");
    scanf("%d", &Jenis_tiket);
    
    int Bayar;
    char member;
    printf("Apakah anda adalah member? (Y/N) :");
    scanf(" %c", &member);
    if (member=='y'||member=='Y') {
        if (Film==1) {
            if (Jenis_tiket==1) {
                float NM_spiderman = Spiderman+Reguler;
                float member_spiderman = NM_spiderman-NM_spiderman * 0.1;
                printf("Total Harga : Rp.%.2f\n", member_spiderman);
                printf("Alamat Memori Variabel total : %p\n", &member_spiderman);
                printf("Masukkan uang pembayaran :");
                scanf("%d", &Bayar);

                float kembalian = Bayar-member_spiderman;
                if (Bayar > member_spiderman) {
                    printf("Kembalian anda : Rp.%.2f\n", kembalian);
                }else if (Bayar == member_spiderman) {
                    printf("Terimakasih \n");
                }else {
                    printf("uang anda kurang\n");
                }
            } else if (Jenis_tiket==2) {
                float NM_spiderman = Spiderman+VIP;
                float member_spiderman = NM_spiderman-NM_spiderman * 0.1;
                printf("Total Harga : Rp.%.2f\n", member_spiderman);
                printf("Alamat Memori Variabel total : %p\n", &member_spiderman);
                printf("Masukkan uang pembayaran :");
                scanf("%d", &Bayar);

                float kembalian = Bayar-member_spiderman;
                if (Bayar > member_spiderman) {
                    printf("Kembalian anda : Rp.%.2f\n", kembalian);
                }else if (Bayar == member_spiderman) {
                    printf("Terimakasih \n");
                }else {
                    printf("uang anda kurang\n");
                }
            }else if (Jenis_tiket==3) {
                float NM_spiderman = Spiderman+VVIP;
                float member_spiderman = NM_spiderman-NM_spiderman * 0.1;
                printf("Total Harga : Rp.%.2f\n", member_spiderman);
                printf("Alamat Memori Variabel total : %p\n", &member_spiderman);
                printf("Masukkan uang pembayaran :");
                scanf("%d", &Bayar);

                float kembalian = Bayar-member_spiderman;
                if (Bayar > member_spiderman) {
                    printf("Kembalian anda : Rp.%.2f\n", kembalian);
                }else if (Bayar == member_spiderman) {
                    printf("Terimakasih \n");
                }else {
                    printf("uang anda kurang\n");
                }
            }
        }else if (Film==2) {
            if (Jenis_tiket==1) {
            float NM_Batman= Batman+Reguler;
                float member_Batman = NM_Batman-NM_Batman * 0.1;
                printf("Total Harga : Rp.%.2f\n", member_Batman);
                printf("Alamat Memori Variabel total : %p\n", &member_Batman);
                printf("Masukkan uang pembayaran :");
                scanf("%d", &Bayar);

                float kembalian = Bayar-member_Batman;
                if (Bayar > member_Batman) {
                    printf("Kembalian anda : Rp.%.2f\n", kembalian);
                }else if (Bayar == member_Batman) {
                    printf("Terimakasih \n");
                }else {
                    printf("uang anda kurang\n");
                }
            }else if (Jenis_tiket==2) {
                float NM_Batman= Batman+VIP;
                float member_Batman = NM_Batman-NM_Batman * 0.1;
                printf("Total Harga : Rp.%.2f\n", member_Batman);
                printf("Alamat Memori Variabel total : %p\n", &member_Batman);
                printf("Masukkan uang pembayaran :");
                scanf("%d", &Bayar);

                float kembalian = Bayar-member_Batman;
                if (Bayar > member_Batman) {
                    printf("Kembalian anda : Rp.%.2f\n", kembalian);
                }else if (Bayar == member_Batman) {
                    printf("Terimakasih \n");
                }else {
                    printf("uang anda kurang\n");
                }
            }else if (Jenis_tiket==3) {
                float NM_Batman= Batman+VVIP;
                float member_Batman = NM_Batman-NM_Batman * 0.1;
                printf("Total Harga : Rp.%.2f\n", member_Batman);
                printf("Alamat Memori Variabel total : %p\n", &member_Batman);
                printf("Masukkan uang pembayaran :");
                scanf("%d", &Bayar);

                float kembalian = Bayar-member_Batman;
                if (Bayar > member_Batman) {
                    printf("Kembalian anda : Rp.%.2f\n", kembalian);
                }else if (Bayar == member_Batman) {
                    printf("Terimakasih \n");
                }else {
                    printf("uang anda kurang\n");
                }
            }
        }else if (Film==3) {
            if (Jenis_tiket==1) {
                float NM_Superman= Superman+Reguler;
                float member_Superman = NM_Superman-NM_Superman * 0.1;
                printf("Total Harga : Rp.%.2f\n", member_Superman);
                printf("Alamat Memori Variabel total : %p\n", &member_Superman);
                printf("Masukkan uang pembayaran :");
                scanf("%d", &Bayar);

                float kembalian = Bayar-member_Superman;
                if (Bayar > member_Superman) {
                    printf("Kembalian anda : Rp.%.2f\n", kembalian);
                }else if (Bayar == member_Superman) {
                    printf("Terimakasih \n");
                }else {
                    printf("uang anda kurang\n");
                }
            }else if (Jenis_tiket==2) {
                float NM_Superman= Superman+VIP;
                float member_Superman = NM_Superman-NM_Superman * 0.1;
                printf("Total Harga : Rp.%.2f\n", member_Superman);
                printf("Alamat Memori Variabel total : %p\n", &member_Superman);
                printf("Masukkan uang pembayaran :");
                scanf("%d", &Bayar);

                float kembalian = Bayar-member_Superman;
                if (Bayar > member_Superman) {
                    printf("Kembalian anda : Rp.%.2f\n", kembalian);
                }else if (Bayar == member_Superman) {
                    printf("Terimakasih \n");
                }else {
                    printf("uang anda kurang\n");
                }
            }else if (Jenis_tiket==3) {
                float NM_Superman= Superman+VVIP;
                float member_Superman = NM_Superman-NM_Superman * 0.1;
                printf("Total Harga : Rp.%.2f\n", member_Superman);
                printf("Alamat Memori Variabel total : %p\n", &member_Superman);
                printf("Masukkan uang pembayaran :");
                scanf("%d", &Bayar);

                float kembalian = Bayar-member_Superman;
                if (Bayar > member_Superman) {
                    printf("Kembalian anda : Rp.%.2f\n", kembalian);
                }else if (Bayar == member_Superman) {
                    printf("Terimakasih \n");
                }else {
                    printf("uang anda kurang\n");
                }
            }
        }else if (Film==4) {
            if (Jenis_tiket==1) {
                float NM_Avengers = Avengers+Reguler;
                float member_Avengers = NM_Avengers-NM_Avengers * 0.1;
                printf("Total Harga : Rp.%.2f\n", member_Avengers);
                printf("Alamat Memori Variabel total : %p\n", &member_Avengers);
                printf("Masukkan uang pembayaran :");
                scanf("%d", &Bayar);

                float kembalian = Bayar-member_Avengers;
                if (Bayar > member_Avengers) {
                    printf("Kembalian anda : Rp.%.2f\n", kembalian);
                }else if (Bayar == member_Avengers) {
                    printf("Terimakasih \n");
                }else {
                    printf("uang anda kurang\n");
                }
            }else if (Jenis_tiket==2) {
                float NM_Avengers = Avengers+VIP;
                float member_Avengers = NM_Avengers-NM_Avengers * 0.1;
                printf("Total Harga : Rp.%.2f\n", member_Avengers);
                printf("Alamat Memori Variabel total : %p\n", &member_Avengers);
                printf("Masukkan uang pembayaran :");
                scanf("%d", &Bayar);

                float kembalian = Bayar-member_Avengers;
                if (Bayar > member_Avengers) {
                    printf("Kembalian anda : Rp.%.2f\n", kembalian);
                }else if (Bayar == member_Avengers) {
                    printf("Terimakasih \n");
                }else {
                    printf("uang anda kurang\n");
                }
            }else if (Jenis_tiket==3) {
                float NM_Avengers = Avengers+VVIP;
                float member_Avengers = NM_Avengers-NM_Avengers * 0.1;
                printf("Total Harga : Rp.%.2f\n", member_Avengers);
                printf("Alamat Memori Variabel total : %p\n", &member_Avengers);
                printf("Masukkan uang pembayaran :");
                scanf("%d", &Bayar);

                float kembalian = Bayar-member_Avengers;
                if (Bayar > member_Avengers) {
                    printf("Kembalian anda : Rp.%.2f\n", kembalian);
                }else if (Bayar == member_Avengers) {
                    printf("Terimakasih \n");
                }else {
                    printf("uang anda kurang\n");
                }
            }
        }else if (Film==5) {
            if (Jenis_tiket==1) {
                float NM_Joker = Joker+Reguler;
                float member_Joker = NM_Joker-NM_Joker * 0.1;
                printf("Total Harga : Rp.%.2f\n", member_Joker);
                printf("Alamat Memori Variabel total : %p\n", &member_Joker);
                printf("Masukkan uang pembayaran :");
                scanf("%d", &Bayar);

                float kembalian = Bayar-member_Joker;
                if (Bayar > member_Joker) {
                    printf("Kembalian anda : Rp.%.2f\n", kembalian);
                }else if (Bayar == member_Joker) {
                    printf("Terimakasih \n");
                }else {
                    printf("uang anda kurang\n");
                }
            }else if (Jenis_tiket==2) {
                float NM_Joker = Joker+VIP;
                float member_Joker = NM_Joker-NM_Joker * 0.1;
                printf("Total Harga : Rp.%.2f\n", member_Joker);
                printf("Alamat Memori Variabel total : %p\n", &member_Joker);
                printf("Masukkan uang pembayaran :");
                scanf("%d", &Bayar);

                float kembalian = Bayar-member_Joker;
                if (Bayar > member_Joker) {
                    printf("Kembalian anda : Rp.%.2f\n", kembalian);
                }else if (Bayar == member_Joker) {
                    printf("Terimakasih \n");
                }else {
                    printf("uang anda kurang\n");
                }
            }else if (Jenis_tiket==3) {
                float NM_Joker = Joker+VVIP;
                float member_Joker = NM_Joker-NM_Joker * 0.1;
                printf("Total Harga : Rp.%.2f\n", member_Joker);
                printf("Alamat Memori Variabel total : %p\n", &member_Joker);
                printf("Masukkan uang pembayaran :");
                scanf("%d", &Bayar);

                float kembalian = Bayar-member_Joker;
                if (Bayar > member_Joker) {
                    printf("Kembalian anda : Rp.%.2f\n", kembalian);
                }else if (Bayar == member_Joker) {
                    printf("Terimakasih \n");
                }else {
                    printf("uang anda kurang\n");
                }
            }
        }
    } else if (member=='n'||member=='N') {
        if (Film==1) {
            if (Jenis_tiket==1) {
                float Member_spiderman = Spiderman+Reguler;
                printf("Total Harga : Rp.%2.f\n", Member_spiderman);
                printf("Alamat Memori Variabel total : %p\n", &Member_spiderman);
                printf("Masukkan uang pembayaran :");
                scanf("%d", &Bayar);

                float kembalian = Bayar-Member_spiderman;
                if (Bayar > Member_spiderman) {
                    printf("Kembalian anda : Rp.%.2f\n", kembalian);
                }else if (Bayar == Member_spiderman) {
                    printf("Terimakasih \n");
                }else {
                    printf("uang anda kurang\n");
                }
            }else if (Jenis_tiket==2) {
                float Member_spiderman = Spiderman+VIP;
                printf("Total Harga : Rp.%2.f\n", Member_spiderman);
                printf("Alamat Memori Variabel total : %p\n", &Member_spiderman);
                printf("Masukkan uang pembayaran :");
                scanf("%d", &Bayar);

                float kembalian = Bayar-Member_spiderman;
                if (Bayar > Member_spiderman) {
                    printf("Kembalian anda : Rp.%.2f\n", kembalian);
                }else if (Bayar == Member_spiderman) {
                    printf("Terimakasih \n");
                }else {
                    printf("uang anda kurang\n");
                }
            }else if (Jenis_tiket==3) {
                float Member_spiderman = Spiderman+VVIP;
                printf("Total Harga : Rp.%2.f\n", Member_spiderman);
                printf("Alamat Memori Variabel total : %p\n", &Member_spiderman);
                printf("Masukkan uang pembayaran :");
                scanf("%d", &Bayar);

                float kembalian = Bayar-Member_spiderman;
                if (Bayar > Member_spiderman) {
                    printf("Kembalian anda : Rp.%.2f\n", kembalian);
                }else if (Bayar == Member_spiderman) {
                    printf("Terimakasih \n");
                }else {
                    printf("uang anda kurang\n");
                }
            }
        }else if (Film==2) {
            if (Jenis_tiket==1) {
                float Member_Batman = Batman+Reguler;
                printf("Total Harga : Rp.%2.f\n", Member_Batman);
                printf("Alamat Memori Variabel total : %p\n", &Member_Batman);
                printf("Masukkan uang pembayaran :");
                scanf("%d", &Bayar);

                float kembalian = Bayar-Member_Batman;
                if (Bayar > Member_Batman) {
                    printf("Kembalian anda : Rp.%.2f\n", kembalian);
                }else if (Bayar == Member_Batman) {
                    printf("Terimakasih \n");
                }else {
                    printf("uang anda kurang\n");
                }
            } else if (Jenis_tiket==2) {
                float Member_Batman = Batman+VIP;
                printf("Total Harga : Rp.%2.f\n", Member_Batman);
                printf("Alamat Memori Variabel total : %p\n", &Member_Batman);
                printf("Masukkan uang pembayaran :");
                scanf("%d", &Bayar);

                float kembalian = Bayar-Member_Batman;
                if (Bayar > Member_Batman) {
                    printf("Kembalian anda : Rp.%.2f\n", kembalian);
                }else if (Bayar == Member_Batman) {
                    printf("Terimakasih \n");
                }else {
                    printf("uang anda kurang\n");
                }
            }else if (Jenis_tiket==3) {
                float Member_Batman = Batman+VVIP;
                printf("Total Harga : Rp.%2.f\n", Member_Batman);
                printf("Alamat Memori Variabel total : %p\n", &Member_Batman);
                printf("Masukkan uang pembayaran :");
                scanf("%d", &Bayar);

                float kembalian = Bayar-Member_Batman;
                if (Bayar > Member_Batman) {
                    printf("Kembalian anda : Rp.%.2f\n", kembalian);
                }else if (Bayar == Member_Batman) {
                    printf("Terimakasih \n");
                }else {
                    printf("uang anda kurang\n");
                }
            }
        }else if (Film==3) {
            if (Jenis_tiket==1) {
                float Member_Superman = Superman+Reguler;
                printf("Total Harga : Rp.%2.f\n", Member_Superman);
                printf("Alamat Memori Variabel total : %p\n", &Member_Superman);
                printf("Masukkan uang pembayaran :");
                scanf("%d", &Bayar);

                float kembalian = Bayar-Member_Superman;
                if (Bayar > Member_Superman) {
                    printf("Kembalian anda : Rp.%.2f\n", kembalian);
                }else if (Bayar == Member_Superman) {
                    printf("Terimakasih \n");
                }else {
                    printf("uang anda kurang\n");
                }
            }else if (Jenis_tiket==2) {
                float Member_Superman = Superman+VIP;
                printf("Total Harga : Rp.%2.f\n", Member_Superman);
                printf("Alamat Memori Variabel total : %p\n", &Member_Superman);
                printf("Masukkan uang pembayaran :");
                scanf("%d", &Bayar);

                float kembalian = Bayar-Member_Superman;
                if (Bayar > Member_Superman) {
                    printf("Kembalian anda : Rp.%.2f\n", kembalian);
                }else if (Bayar == Member_Superman) {
                    printf("Terimakasih \n");
                }else {
                    printf("uang anda kurang\n");
                }
            }else if (Jenis_tiket==3) {
                float Member_Superman = Superman+VVIP;
                printf("Total Harga : Rp.%2.f\n", Member_Superman);
                printf("Alamat Memori Variabel total : %p\n", &Member_Superman);
                printf("Masukkan uang pembayaran :");
                scanf("%d", &Bayar);

                float kembalian = Bayar-Member_Superman;
                if (Bayar > Member_Superman) {
                    printf("Kembalian anda : Rp.%.2f\n", kembalian);
                }else if (Bayar == Member_Superman) {
                    printf("Terimakasih \n");
                }else {
                    printf("uang anda kurang\n");
                }
            }
        }else if (Film==4) {
            if (Jenis_tiket==1) {
                float Member_Avengers = Avengers+Reguler;
                printf("Total Harga : Rp.%2.f\n", Member_Avengers);
                printf("Alamat Memori Variabel total : %p\n", &Member_Avengers);
                printf("Masukkan uang pembayaran :");
                scanf("%d", &Bayar);

                float kembalian = Bayar-Member_Avengers;
                if (Bayar > Member_Avengers) {
                    printf("Kembalian anda : Rp.%.2f\n", kembalian);
                }else if (Bayar == Member_Avengers) {
                    printf("Terimakasih \n");
                }else {
                    printf("uang anda kurang\n");
                }
            }else if (Jenis_tiket==2) {
                float Member_Avengers = Avengers+VIP;
                printf("Total Harga : Rp.%2.f\n", Member_Avengers);
                printf("Alamat Memori Variabel total : %p\n", &Member_Avengers);
                printf("Masukkan uang pembayaran :");
                scanf("%d", &Bayar);

                float kembalian = Bayar-Member_Avengers;
                if (Bayar > Member_Avengers) {
                    printf("Kembalian anda : Rp.%.2f\n", kembalian);
                }else if (Bayar == Member_Avengers) {
                    printf("Terimakasih \n");
                }else {
                    printf("uang anda kurang\n");
                }
            }else if (Jenis_tiket==3) {
                float Member_Avengers = Avengers+VVIP;
                printf("Total Harga : Rp.%2.f\n", Member_Avengers);
                printf("Alamat Memori Variabel total : %p\n", &Member_Avengers);
                printf("Masukkan uang pembayaran :");
                scanf("%d", &Bayar);

                float kembalian = Bayar-Member_Avengers;
                if (Bayar > Member_Avengers) {
                    printf("Kembalian anda : Rp.%.2f\n", kembalian);
                }else if (Bayar == Member_Avengers) {
                    printf("Terimakasih \n");
                }else {
                    printf("uang anda kurang\n");
                }
            }
        }else if (Film==5) {
            if (Jenis_tiket==1) {
                float Member_Joker = Joker+Reguler;
                printf("Total Harga : Rp.%2.f\n", Member_Joker);
                printf("Alamat Memori Variabel total : %p\n", &Member_Joker);
                printf("Masukkan uang pembayaran :");
                scanf("%d", &Bayar);

                float kembalian = Bayar-Member_Joker;
                if (Bayar > Member_Joker) {
                    printf("Kembalian anda : Rp.%.2f\n", kembalian);
                }else if (Bayar == Member_Joker) {
                    printf("Terimakasih \n");
                }else {
                    printf("uang anda kurang\n");
                }
            } else if (Jenis_tiket==2) {
                float Member_Joker = Joker+VIP;
                printf("Total Harga : Rp.%2.f\n", Member_Joker);
                printf("Alamat Memori Variabel total : %p\n", &Member_Joker);
                printf("Masukkan uang pembayaran :");
                scanf("%d", &Bayar);

                float kembalian = Bayar-Member_Joker;
                if (Bayar > Member_Joker) {
                    printf("Kembalian anda : Rp.%.2f\n", kembalian);
                }else if (Bayar == Member_Joker) {
                    printf("Terimakasih \n");
                }else {
                    printf("uang anda kurang\n");
                }
            } else if (Jenis_tiket==3) {
                float Member_Joker = Joker+VVIP;
                printf("Total Harga : Rp.%2.f\n", Member_Joker);
                printf("Alamat Memori Variabel total : %p\n", &Member_Joker);
                printf("Masukkan uang pembayaran :");
                scanf("%d", &Bayar);

                float kembalian = Bayar-Member_Joker;
                if (Bayar > Member_Joker) {
                    printf("Kembalian anda : Rp.%.2f\n", kembalian);
                }else if (Bayar == Member_Joker) {
                    printf("Terimakasih \n");
                }else {
                    printf("uang anda kurang\n");
                }
            }
        }
    } else {
        printf("error");
    }
}