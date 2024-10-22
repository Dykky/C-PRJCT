#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
// Boolean values
bool flagTrue = true; //seharusnya bool bukan boolean 
bool flagFalse = false;//seharusnya bool bukan boolean
printf("Boolean values demonstration:\n");
printf("flagTrue: %d\n", true); //Memanggil variabel flagtrue
printf("flagFalse: %d\n", false); //memanggil variabel flagfalse
// String operations
char greeting[] = "Hello, World!";
char copyGreeting[20];
strcpy(copyGreeting, greeting); //seharusnya menggunakan strcpy bukan stringcopy
printf("\nString operations:\n");
printf("Original greeting: %s\n", greeting);//memanggil variabel greeting 
printf("Copied greeting: %s\n", copyGreeting);//memanggil variabel copygreeting
// Pointer demonstrations
int number = 100;
int *pointer = &number;
printf("\nPointer demonstrations:\n");
printf("Value of number: %d\n", number);//memanggil variabel number
printf("Address of number: %p\n", &number);
printf("Value of pointer: %p\n", pointer);
printf("Value pointed by pointer: %d\n", *pointer);//memanggil variabel *pointer
return 0;
}