//		Nama	: Filza Hisana Hizbullah	
//		NIM		: 20051397018
//		Kelas	: 2020B
//		Prodi	: D IV Manajemen Informatika
//		Tugas	: Praktikum 5 - Struktur Data 		
//		Modul	: Praktikum.7 no.2

#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int Data[MAX];
// Fungsi pengurutan penyisipan langsung
void StraightInsertSort()
{
	int i, j, x;
	for(i=1; i<MAX; i++)
	{
		x = Data[i];
		j = i - 1;
		while (x < Data[j]){
		Data[j+1] = Data[j];
		j--;
		}
		Data[j+1] = x;
	}
}
int main()
{
	int i;
	srand(0);
	printf("Filza Hisana Hizbullah\n");
	printf("20051397018\n");
	printf("Manajemen Informatika 2020B\n\n");
	// Membangkitkan bilangan acak
	printf("DATA SEBELUM TERURUT");
	for(i=0; i<MAX; i++)
	{
		Data[i] = (int) rand()/1000+1;
		printf("\nData ke %d : %d ", i, Data[i]);
	}
	StraightInsertSort();
	// Data setelah terurut
	printf("\n\nDATA SETELAH TERURUT");
	for(i=0; i<MAX; i++)
	{
	printf("\nData ke %d : %d ", i, Data[i]);
	}
}
