#include <stdio.h>

int main() {
    
    int penjualan[2][3] = {
        {5, 8, 6},  
        {3, 7, 9}   
    };

    
    int total_penjualan[3] = {0, 0, 0};
    int i;
   
    for ( i = 0; i < 3; i++) {
        total_penjualan[i] = penjualan[0][i] + penjualan[1][i];
    }

 
    printf("Total penjualan untuk setiap produk:\n");
    printf("Produk A: %d\n", total_penjualan[0]);
    printf("Produk B: %d\n", total_penjualan[1]);
    printf("Produk C: %d\n", total_penjualan[2]);

    return 0;
}