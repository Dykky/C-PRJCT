#include <stdio.h>
int faktorial(int a); // fungsi untuk menghitung faktorial
int fibonacci(int b); // fungsi untuk menghitung fibonacci

int main()
{
	int a ; // variabel a bertipe data int untuk menghitung faktorial
	printf("Masukkan angka untuk menghitung faktorial = "); // menampilkan output
	scanf("%d", &a);// mengambil input dari pengguna
	int hasil = faktorial(a); //mengambil fungsi faktorial dan menyimpan kedalam variabel hasil
	printf("faktorial dari %d adalah: %d", a, hasil); // menampilkan hasil perhitungan faktorial
	int b ; // variabel b bertipe data int untuk menghitung deret fibonacci
	printf("\nMasukkan angka untuk menghasilkan deret Fibonacci = "); // menampilkan output 
	scanf("%d", &b);//mengambil input dari pengguna
	int i; // menampilkan deret fibonaci hingga suku ke b
	printf("Deret Fibonacci hingga suku ke-%d adalah = ", b);
	for (i = 0; i < b; i++) { // melakukan looping untuk menampilkan deret fibonacci
        printf("%d ", fibonacci(i));//memanggil fungsi fibonaci 
    }
	return 0; // mengakhiri fungsi main
}

int faktorial(int a)// menghitung faktorial secara rekursif 
{
	int fak = 1;//menginisialisasi fak dengan nilai 1 untuk menyimpan hasil faktorial
	while(a > 1){ // looping untuk menghitung faktorial dengan mengalikan fak dengan a dan mengurangi a 
		fak *= a; // mengalikan fak dengan a
		a -= 1;//mengurangi nilai a
	}
	return fak; // mengambil hasil faktorial yang sudah dihitung
}
int fibonacci(int b) // fungsi untuk menghitung fibonaci 
{
	if (b == 0) { //suku ke 0 dan ke 1
   	   return 0; // mengambalikan 0 jika indeksnya 0
   } else if (b == 1) {
	        return 1; //mengambalikan 1 jika indeksnya 1
   } else {
   	   return fibonacci(b - 1) + fibonacci(b - 2); //menghitung fibonaci secara rekursif menggunakan dua angka sebelumnya
}
	
		
}