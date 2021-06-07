//		Nama	: Filza Hisana Hizbullah	
//		NIM		: 20051397018
//		Kelas	: 2020B
//		Prodi	: D IV Manajemen Informatika
//		Tugas	: Praktikum 5 - Struktur Data 		
//		Modul	: Praktikum.6 no.1	

#include <stdio.h>
#include <stdlib.h>
void urutan();
int main()
{
	int n;
	printf("Filza Hisana Hizbullah\n");
	printf("20051397018\n");
	printf("Manajemen Informatika 2020B\n\n");
	printf("Input n : ");scanf("%d", &n);
	urutan();
	return 0;
}

void urutan(int i)
{
	printf("%d\n", i);
	if(i==0)
	return;
	urutan(i-1);
}

