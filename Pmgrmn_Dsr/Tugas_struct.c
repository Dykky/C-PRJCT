#include <stdio.h>
#include <string.h>
#define MAX 10

typedef struct {
    char nama [50];
    int umur;
    float nilai;
} Mahasiswa;

float Hslratarata(Mahasiswa data [], int n){
    int i;
    float hasil=0;
    for ( i=0; i<n; i++){
        hasil += data[i]. nilai;
    }
    return hasil/n;
}

void urutkanNilai (Mahasiswa data [], int n){
    int i,j;
    for ( i=0; i<n - 1; i++){
        for ( j=i + 1; j<n; j++){
            if (data[i].nilai < data[j].nilai) {
                Mahasiswa temp=data[i];
                data[i] = data[j];
                data[j]=temp;
            }
        }
    }
}

void urutkanNama(Mahasiswa data[], int n){
    int i,j;
    for (i = 0; i <n - 1; i++){
        for ( j = i + 1; j<n; j++){
            if (strcmp(data[i].nama, data[j].nama)>0){
                Mahasiswa temp = data[i];
                data[i]= data[j];
                data[j]= temp;
            }
        }
    }
}

void urutkanUmur(Mahasiswa data[], int n){
    int i,j;
    for (i=0; i<n; i++){
        for (j=i + 1; j<n; j++){
            if (data[i].umur < data[j].umur){
                Mahasiswa temp=data[i];
                data[i] = data[j];
                data[j] = temp;
            }
        }
    }
}
int main (){
    Mahasiswa data[MAX];
    int n;
    int i;
    printf("Masukkan Jumlah Mahasiswa : ");
    scanf("%d", &n);

    for( i=0; i<n; i++){
        printf("\n Data Mahasiswa ke %d : \n", i + 1);
        printf("Nama :");
        scanf("%s", data[i].nama);
        printf("Umur : ");
        scanf("%d", &data[i].umur);
        printf("Nilai : ");
        scanf("%f", &data[i].nilai);
    }

    float ratarata = Hslratarata(data,n);

    urutkanNilai(data, n);
    printf("\nData Mahasiswa berdasarkan Nilai Tertinggi :\n");
    for (i =0; i<n; i++){
        printf("%s, Umur : %d, Nilai : %.2f\n", data[i].nama, data[i].umur, data[i].nilai);
    }

    urutkanNama(data, n);
    printf("\nData Mahasiswa berdasarkan abjad nama :\n");
    for (i =0; i<n; i++){
        printf("%s, Umur : %d, Nilai : %.2f\n", data[i].nama, data[i].umur, data[i].nilai);
    }

    urutkanUmur(data, n);
    printf("\nData Mahasiswa berdasarkan Umur : \n");
    for (i=0; i<n; i++){
        printf("%s, umur : %d, Nilai : %.2f\n", data[i].nama, data[i].umur, data[i].nilai);
    }
    
    printf("\nRata-rata Nilai : %.2f\n", ratarata);

    return 0;
}