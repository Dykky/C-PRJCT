#include <stdio.h>
#include <string.h>

int main() {
    int jumlah_transaksi; 
    int i;
    char jenis_transaksi[50];
    char nama_barang[100];
    int harga, jumlah;
    int total_biaya_pembelian = 0;
    int total_pendapatan_penjualan = 0;

    printf("Masukkan jumlah transaksi: ");
    scanf("%d", &jumlah_transaksi);

    for (i = 1; i <= jumlah_transaksi; i++) {
        printf("\nMasukkan jenis transaksi ke-%d (pembelian/penjualan): ", i);
        scanf("%s", jenis_transaksi);
        printf("Masukkan nama barang: ");
        scanf("%s", nama_barang);
        printf("Masukkan harga barang: ");
        scanf("%d", &harga);
        printf("Masukkan jumlah barang: ");
        scanf("%d", &jumlah);

        int total = harga * jumlah;

        if (strcmp(jenis_transaksi, "pembelian") == 0) {
            total_biaya_pembelian += total;
        } else if (strcmp(jenis_transaksi, "penjualan") == 0) {
            total_pendapatan_penjualan += total;
        } else {
            printf("Jenis transaksi tidak valid!\n");
            i--; 
            continue;
        }
    }

    printf("\nHasil Perhitungan:\n");
    printf("Total Biaya Pembelian: Rp %d\n", total_biaya_pembelian);
    printf("Total Pendapatan Penjualan: Rp %d\n", total_pendapatan_penjualan);

    if (total_pendapatan_penjualan > total_biaya_pembelian) {
        int keuntungan = total_pendapatan_penjualan - total_biaya_pembelian;
        printf("Status: Keuntungan sebesar Rp %d\n", keuntungan);
    } else if (total_pendapatan_penjualan < total_biaya_pembelian) {
        int kerugian = total_biaya_pembelian - total_pendapatan_penjualan;
        printf("Status: Kerugian sebesar Rp %d\n", kerugian);
    } else {
        printf("Status: Tidak ada keuntungan atau kerugian\n");
    }

    return 0;
}