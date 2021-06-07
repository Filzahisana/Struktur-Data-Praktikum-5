//		Nama	: Filza Hisana Hizbullah	
//		NIM		: 20051397018
//		Kelas	: 2020B
//		Prodi	: D IV Manajemen Informatika
//		Tugas	: Praktikum 5 - Struktur Data 		
//		Modul	: Praktikum.6 no.3			
		
#include <stdio.h>
#include <stdlib.h>
void array(int [],int,int);
int main()
{
	int a[]={0,1,2,3,4,5,6,7,8};
	int x, i=8;
	printf("Fizla Hisana Hizbullah\n");
	printf("20051397018\n");
	printf("Manajemen Informatika 2020B\n\n");
	printf("Input x : ");scanf("%d", &x);
	array(a,x,i);
}
void array(int a[],int x,int i){
if(i<0)
 {
	puts("x bukan merupakan anggota array a");
	return;
 }
 
 if(x==a[i])
 {
	puts("x merupakan anggota array a");
	return;
 }
array(a,x,i-1);
}

