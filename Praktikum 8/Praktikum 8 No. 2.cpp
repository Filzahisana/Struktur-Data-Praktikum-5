//		Nama	: Filza Hisana Hizbullah	
//		NIM		: 20051397018
//		Kelas	: 2020B
//		Prodi	: D IV Manajemen Informatika
//		Tugas	: Praktikum 5 - Struktur Data 		
//		Modul	: Praktikum.8 no.2

#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n)
{
  int i, j, tmp;
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n - i - 1; j++)
	{
      if (arr[j] > arr[j + 1])
	  {
        tmp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = tmp;
      }
    }
  }
}
int main()
{
  int array[100], n, i, j;
  cout<<"Filza Hisana Hizbullah\n";
  cout<<"20051397032\n";
  cout<<"Manajemen Informatika 2020B\n\n";
  cout << "Masukkan banyak elemen: ";
  cin >> n;
  cout << "Masukkan nilai: \n";
  for (i = 0; i < n; i++)
  {
    cin >> array[i];
  }
  bubbleSort(array, n);
  cout << "Hasil pengurutan sebagai berikut:\n";
  for (i = 0; i < n; i++)
  {
    cout << array[i] << " ";
  }
  cout << "\n";
}

