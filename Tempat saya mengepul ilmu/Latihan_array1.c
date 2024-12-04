
#include <stdio.h>

int main() {
    int arrNilai[5];
    
    for (int i=0; i<5 ; i++){
        printf("Masukkan indeks ke-%d = ", i);
        scanf("%d", &arrNilai[i]);
    }
    printf("Sebelum dibalik\n");
    for (int i=0; i<5;i++){
        printf("%d\t", arrNilai[i]);
    }
     printf("\nsesudah dibalik\n");
    for (int i=4; i>=0 ;i--){
        printf("%d\t", arrNilai[i]);
    }
    
    for(int i=0; i<5 ;i++){
        if (arrNilai[i]%2==0)
    {
        printf("Bilangan ganjil : %d\n"arrNilai[i]);
    } else{
        printf("Bilangan Genap : %d\n",arrNilai[i]);
    }
    }
    
}