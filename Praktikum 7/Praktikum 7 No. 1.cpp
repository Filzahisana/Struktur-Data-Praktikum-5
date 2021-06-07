//		Nama	: Filza Hisana Hizbullah	
//		NIM		: 20051397018
//		Kelas	: 2020B
//		Prodi	: D IV Manajemen Informatika
//		Tugas	: Praktikum 5 - Struktur Data 		
//		Modul	: Praktikum.7 no.1

#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int Data[MAX];
// Fungsi pertukaran bilangan
void Tukar (int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
// Fungsi pengurutan penyisipan biner
void SelectionSort()
{
	int i, j, k;
	for(i=0; i<MAX-1;i++)
	{
		k = i;
		for (j=i+1; j<MAX; j++)
		if(Data[k] > Data[j])
		k = j;
		Tukar(&Data[i], &Data[k]);
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
	SelectionSort();
	// Data setelah terurut
	printf("\n\nDATA SETELAH TERURUT");
	for(i=0; i<MAX; i++)
	{
		printf("\nData ke %d : %d ", i, Data[i]);
	}
}
