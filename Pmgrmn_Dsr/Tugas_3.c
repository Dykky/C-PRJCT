#include <stdio.h>
int main()
{
	int i;
	int j;
	int k;
	for(i=0; i<=6; i++){
		for(k=1; k<=i; k++){
			printf(" ");}
		for(j=0; j<=i; j++){
			printf("*");
		
		}printf("\n");
	}
	return 0;
}