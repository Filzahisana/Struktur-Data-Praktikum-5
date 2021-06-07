//		Nama	: Filza Hisana Hizbullah	
//		NIM		: 20051397018
//		Kelas	: 2020B
//		Prodi	: D IV Manajemen Informatika
//		Tugas	: Praktikum 5 - Struktur Data 		
//		Modul	: Praktikum.8 no.1

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    //Deklarasi variabel
   int val[100];
   int i, n, t;

   //Input
   cout<<endl;
   cout<<"Filza Hisana Hizbullah\n";
   cout<<"20051397032\n";
   cout<<"Manajemen Informatika 2020B\n\n";
   cout<<"\n\t\t\tPengurutan Menaik Metode Shell Shot \n\n\n";
   cout<<"Masukkan Jumlah Data yg ingin di urutkan : ";cin>>n;
   cout<<endl;
    for(i = 0; i < n; i++)
   {
       cout<<"Nilai ke-"<<1+i<<"  : ";cin>>val[i];
   }

   //Shell Sort
    for(int w = n/2; w > 0;w=w/2)
    {
       for(int x = w; x < n; x++)
      {
          for (int y = x-w; y >= 0; y-=w)
         {
             if(val[y+w] < val[y]) //Note
            {
                t=val[y+w];
               val[y+w]=val[y];
               val[y]=t;
            }
         }
      }
   }

   //Mencetak data setelah diurutkan
   cout<<endl;
   cout<<" DATA YG TELAH DIURUTKAN DENGAN MENGGUNAKAN SHELL SORT  \n";
   cout<<endl;
   for(i = 0; i < n; i++)
   {
       cout<<val[i]<<" ";
   }
   getch();
}
