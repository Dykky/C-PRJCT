#include <stdio.h>
int main(){
    int ganjil=0;
    int genap=1;
    int i;
    
    for (i=1; i<=11; i++) {
        if (i%2==1) {
        printf("%d\t", ganjil+=1);
        }else {
        printf("%d\t", genap+=2);
        }
    }
}