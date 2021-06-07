//		Nama	: Filza Hisana Hizbullah	
//		NIM		: 20051397018
//		Kelas	: 2020B
//		Prodi	: D IV Manajemen Informatika
//		Tugas	: Praktikum 5 - Struktur Data 		
//		Modul	: Praktikum.10 no.1
#include <conio.h>
#include <iostream>
using namespace std;
int main()
{
for(int i=0;i<20;i++){
 cout<<A[i]<<" ";
}
cout<<"Filza Hisana Hizbullah\n";
cout<<"20051397018\n";
cout<<"Manajemen Informatika 2020B\n\n";
cout<<"\nData yang ingin dicari : ";
cin>>c;
i=0;
posisi=0;
while(i<19 && A[i]!=c){
 i++;
}
if (A[i]!=c){
 cout<<"Maaf data yang dicari tidak ada";
}else if(posisi=i+1)
   cout<<"ditemukan pada posisi ke "<<posisi;
getch();
}

