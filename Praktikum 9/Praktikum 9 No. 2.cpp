//		Nama	: Filza Hisana Hizbullah	
//		NIM		: 20051397018
//		Kelas	: 2020B
//		Prodi	: D IV Manajemen Informatika
//		Tugas	: Praktikum 5 - Struktur Data 		
//		Modul	: Praktikum.7 no.2

#include <iostream>
#include <conio.h>
#define max 20
using namespace std ;
void quick_sort(int darr[max], int lb, int ub)
{
  int a;
   int atas,bawah;
   int temp;
 
   if (lb>=ub)
    return;
   a=darr[lb];
   //1. Tentukan Lower Bound (Batas Bawah) & Upper Bound (Batas Atas)
 
   atas=ub;
   bawah=lb;
 
   while (bawah < atas) //2. Bandingkan Lower Bound (LB) dengan Upper Bound (UB)
   {
     while (darr[bawah] <= a) //
       bawah++;
      while (darr[atas]>a) //3. Jika LB>UB, Tukar (cari operasi perbandingan yang optimal/terkecil)
       atas--;
      if(bawah<atas)
      {
        temp=darr[bawah];
         darr[bawah]=darr[atas];
         darr[atas]=temp;
      }
      //4. Jika LB =< UB, maka Next Upper Bound & Lower Bound
 
   }
   darr[lb]=darr[atas];
   darr[atas]=a;
 
   quick_sort(darr,lb,atas-1);
   quick_sort(darr,atas+1,ub);
}
 
int main()
{
  int arr[max];
   int i,n,lb,ub;
   lb=0;
   cout<<"Filza Hisana Hizbullah\n";
   cout<<"20051397018\n";
   cout<<"Manajemen Informatika 2020B\n\n";
   cout<<"\tQUICK SORT\n\n";
   cout<<"Masukkan jumlah index : ";
   cin>>n;
 
   ub=n;
   cout<<"Masukkan data: \n\n";
   for(i=1;i<=n;i++)
   {
     cout<<"data ke -> "<<i<<" : "; cin>>arr[i];
   }
 
   quick_sort(arr,lb,ub);
   cout<<"\nHasil pengurutan data: ";
   for(i=0; i<n;i++)
    cout<<" "<<arr[i];
 
   getch();
}
