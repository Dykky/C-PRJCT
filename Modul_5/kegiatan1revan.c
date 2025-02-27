#include <stdio.h>
#include <string.h>

int main(){
	int banyakbuah;
	char daftarbuah[10][20];
	int i,j;
	
	printf("masukkan banyak buah (maksimal 10) = ");
	scanf("%d",&banyakbuah);
	
	if(banyakbuah<=10) {
		for(i = 0 ; i < banyakbuah; i++){
			printf("masukkan nama buah ke-%d = " , i + 1);
            scanf("%s",daftarbuah[i]);
		}

        printf ("nama buah dalam urutan yang diinputkan : \n");
        for (i = 0;i< banyakbuah;i++){
            printf("%s \n",daftarbuah[i]);
        }
        for (i = 0 ;i < banyakbuah - 1;i++){
            for (j = 0; j < banyakbuah - 1;j++){
                if (strcmp(daftarbuah[j],daftarbuah[j + 1]) > 0){

                    char tempat[20];
                    strcpy(tempat,daftarbuah[j]);
                    strcpy(daftarbuah[j],daftarbuah[j+1]);
                    strcpy(daftarbuah[j + 1],tempat);
                }
            }
        }

        printf("\nnama buah dalam urutan abjad : \n");
        for(i = 0 ; i < banyakbuah; i++){
            printf("%s \n",daftarbuah[i]);
        }
	} else {
        printf("input maksimal 10 buah\n");
    }
}