
#include <stdio.h>

int main() {
    int arrNilai[5];
    int Total_ganjil=0;
    int Total_genap=0;
    int i;
    for (i=0; i<5 ; i++){
        printf("Masukkan indeks ke-%d = ", i);
        scanf("%d", &arrNilai[i]);
    }
    printf("Sebelum dibalik\n");
    for (i=0; i<5;i++){
        printf("%d\t", arrNilai[i]);
    }
     printf("\nsesudah dibalik\n");
    for (i=4; i>=0 ;i--){
        printf("%d\t", arrNilai[i]);
    }
    
    printf("\n");
    for(i=0; i<5 ;i++){
        if (arrNilai[i]%2==0)
    {
        printf("Bilangan genap : %d\n",arrNilai[i]);
        Total_genap += arrNilai[i];
    } else{
        printf("Bilangan ganjil: %d\n",arrNilai[i]);
        Total_ganjil += arrNilai[i];
    }
    }
    
    printf ("Total ganjil = %d\n", Total_ganjil);
    printf ("Total genap = %d\n", Total_genap);
    
    int min = arrNilai[0];
    int max = arrNilai[0];
    for (i = 1; i < 5; i++) {
        if (arrNilai[i] < min) {
            min = arrNilai[i];
        }
        if (arrNilai[i] > max) {
            max = arrNilai[i];
        }
    }

    printf("Nilai minimum = %d\n", min);
    printf("Nilai maksimum = %d\n", max);    
    
    printf("Kita manusia bukan nabi boyyy");
}