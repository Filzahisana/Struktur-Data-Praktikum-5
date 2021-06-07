//		Nama	: Filza Hisana Hizbullah	
//		NIM		: 20051397018
//		Kelas	: 2020B
//		Prodi	: D IV Manajemen Informatika
//		Tugas	: Praktikum 5 - Struktur Data 		
//		Modul	: Praktikum.6 no.4	

#include <stdio.h>
#include <stdlib.h>
int prima(int n, int i)
{
	if(n%i==0)
	return 0;
	if(i==2)
	return 1;
	prima(n, i-1);
	}
int main()
{
	int i,n, output;
	printf("Filza Hisana Hizbullah\n");
	printf("20051397032\n");
	printf("Manajemen Informatika 2020B\n\n");
	printf("Input bilangan : ");
	scanf("%d", &n);
	i=n-1;
	if(n!=1)
	{
		if(prima(n, i) || n==2)
		{
			puts("Bilangan tersebut prima");
		}
		else
		{
			puts("Bilangan tersebut bukan prima");
		}
	}
	 else
	 {
		 puts("Bilangan tersebut bukan prima");
	 }
	 return 0;
}

